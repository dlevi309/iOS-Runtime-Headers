/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOperation.h>

@protocol AVOutputDeviceConfigurationRetrieval;
@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation {

	OpaqueFigRoutingContextRef _routingContext;
	/*^block*/id _configuratorBlock;
	id<AVOutputDeviceConfigurationRetrieval> _finalConfiguration;

}

@property (nonatomic,retain) id<AVOutputDeviceConfigurationRetrieval> finalConfiguration;              //@synthesize finalConfiguration=_finalConfiguration - In the implementation block
+(void)initialize;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 configuratorBlock:(/*^block*/id)arg2 ;
-(void)setFinalConfiguration:(id<AVOutputDeviceConfigurationRetrieval>)arg1 ;
-(id<AVOutputDeviceConfigurationRetrieval>)finalConfiguration;
-(void)dealloc;
@end

