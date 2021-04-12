/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSMutableDictionary, NSMutableArray;

@interface MSVCLICommandInterpreter : NSObject {

	NSMutableDictionary* _commandToInvocationsMap;
	NSMutableArray* _retainedBlockHandlers;

}
-(void)addHandlerToCommand:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 ;
-(void)addHandlerToCommand:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)handlerExistsForCommand:(id)arg1 ;
-(BOOL)executeWithArgumentCount:(int)arg1 arguments:(const char**)arg2 ;
-(id)init;
@end

