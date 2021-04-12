/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWMessageHandler.h>
#import <libobjc.A.dylib/SWInteractionProvider.h>

@protocol SWInteractionProvider <NSObject>
@property (nonatomic,readonly) id<SWInteraction> interaction; 
@required
-(id<SWInteraction>)interaction;
-(void)onChange:(/*^block*/id)arg1;

@end


@protocol SWInteraction, SWInteractionFactory, SWLogger;
@class NSMutableArray, NSString;

@interface SWInteractionProvider : NSObject <SWMessageHandler, SWInteractionProvider> {

	id<SWInteraction> _interaction;
	id<SWInteractionFactory> _interactionFactory;
	id<SWLogger> _logger;
	NSMutableArray* _blocks;

}

@property (nonatomic,readonly) id<SWInteractionFactory> interactionFactory;              //@synthesize interactionFactory=_interactionFactory - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSMutableArray * blocks;                                  //@synthesize blocks=_blocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SWInteraction> interaction;                            //@synthesize interaction=_interaction - In the implementation block
-(id<SWLogger>)logger;
-(id<SWInteraction>)interaction;
-(NSMutableArray *)blocks;
-(void)onChange:(/*^block*/id)arg1 ;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(id)initWithMessageHandlerManager:(id)arg1 documentStateProvider:(id)arg2 interactionFactory:(id)arg3 logger:(id)arg4 ;
-(id<SWInteractionFactory>)interactionFactory;
@end

