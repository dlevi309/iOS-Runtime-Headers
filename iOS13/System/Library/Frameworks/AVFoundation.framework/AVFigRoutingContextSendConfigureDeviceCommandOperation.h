/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOperation.h>

@protocol AVOutputDeviceConfigurationRetrieval;
@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation {

	OpaqueFigRoutingContextRef _routingContext;
	/*^block*/id _configuratorBlock;
	id<AVOutputDeviceConfigurationRetrieval> _finalConfiguration;

}

@property (nonatomic,retain) id<AVOutputDeviceConfigurationRetrieval> finalConfiguration;              //@synthesize finalConfiguration=_finalConfiguration - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)isAsynchronous;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 configuratorBlock:(/*^block*/id)arg2 ;
-(id<AVOutputDeviceConfigurationRetrieval>)finalConfiguration;
-(void)setFinalConfiguration:(id<AVOutputDeviceConfigurationRetrieval>)arg1 ;
@end

