/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class NSString;

@interface WDClinicalGatewayProxy : NSObject {

	NSString* _gatewayID;
	NSString* _batchID;

}

@property (nonatomic,copy,readonly) NSString * gatewayID;              //@synthesize gatewayID=_gatewayID - In the implementation block
@property (nonatomic,copy,readonly) NSString * batchID;                //@synthesize batchID=_batchID - In the implementation block
-(id)init;
-(NSString *)batchID;
-(NSString *)gatewayID;
-(id)initWithGatewayID:(id)arg1 batchID:(id)arg2 ;
@end

