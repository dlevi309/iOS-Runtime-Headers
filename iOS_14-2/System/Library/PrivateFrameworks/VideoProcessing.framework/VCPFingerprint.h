/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)master;
-(id)initWithMaster:(id)arg1 adjusted:(id)arg2 ;
-(BOOL)isEqualToFingerprint:(id)arg1 ;
-(id)description;
-(NSString *)adjusted;
@end

