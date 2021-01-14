/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSArray, NSError, NSNumber;

@interface MPCAssistantSendCommandResult : NSObject {

	NSArray* _returnStatuses;
	NSError* _error;
	NSNumber* _devicesControlled;

}

@property (nonatomic,readonly) NSArray * returnStatuses;              //@synthesize returnStatuses=_returnStatuses - In the implementation block
@property (nonatomic,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSNumber * devicesControlled;              //@synthesize devicesControlled=_devicesControlled - In the implementation block
-(NSError *)error;
-(id)initWithReturnStatuses:(id)arg1 error:(id)arg2 ;
-(void)setDevicesControlled:(NSNumber *)arg1 ;
-(NSArray *)returnStatuses;
-(NSNumber *)devicesControlled;
@end

