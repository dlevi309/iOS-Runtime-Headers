/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/


@protocol OS_dispatch_queue;
#import <HomeSharing/HomeSharing-Structs.h>
@class NSObject, NSString;

@interface HSFairPlayInfo : NSObject {

	NSObject*<OS_dispatch_queue> _sapQueue;
	void* _hwInfo;
	void* _session;

}

@property (nonatomic,readonly) NSString * deviceGUID; 
-(id)init;
-(void)dealloc;
-(NSString *)deviceGUID;
-(id)securityInfoForURL:(id)arg1 ;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(void)endSecuritySession;
-(id)_hexStringForData:(id)arg1 ;
-(id)beginNegotiationWithSAPVersion:(unsigned)arg1 ;
-(id)continueNegotationWithSAPVersion:(unsigned)arg1 data:(id)arg2 isComplete:(BOOL*)arg3 ;
@end

