/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class NSString;

@interface VCPFingerprint : NSObject {

	NSString* _master;
	NSString* _adjusted;

}

@property (readonly) NSString * master;                //@synthesize master=_master - In the implementation block
@property (readonly) NSString * adjusted;              //@synthesize adjusted=_adjusted - In the implementation block
+(id)fingerprintWithMaster:(id)arg1 adjusted:(id)arg2 ;
-(id)init;
-(id)description;
-(NSString *)master;
-(id)initWithMaster:(id)arg1 adjusted:(id)arg2 ;
-(NSString *)adjusted;
-(BOOL)isEqualToFingerprint:(id)arg1 ;
@end

