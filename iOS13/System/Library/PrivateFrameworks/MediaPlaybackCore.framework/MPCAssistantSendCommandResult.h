/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

