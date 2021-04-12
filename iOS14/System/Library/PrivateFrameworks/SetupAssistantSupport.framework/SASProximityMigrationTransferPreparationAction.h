/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityMigrationTransferPreparationAction : SASProximityAction {

	NSString* _deviceName;

}

@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
+(unsigned long long)actionID;
+(id)actionFromDictionary:(id)arg1 ;
-(NSString *)deviceName;
-(BOOL)hasResponse;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)requestPayload;
@end

