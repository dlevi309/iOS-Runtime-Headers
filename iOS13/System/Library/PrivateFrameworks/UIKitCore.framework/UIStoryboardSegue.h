/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIViewController;

@interface UIStoryboardSegue : NSObject {

	NSString* _identifier;
	UIViewController* _sourceViewController;
	UIViewController* _destinationViewController;
	/*^block*/id _performHandler;
	/*^block*/id _prepareHandler;
	id _sender;

}

@property (nonatomic,copy) id prepareHandler;                                             //@synthesize prepareHandler=_prepareHandler - In the implementation block
@property (nonatomic,copy) id performHandler;                                             //@synthesize performHandler=_performHandler - In the implementation block
@property (nonatomic,retain) id sender;                                                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIViewController * sourceViewController;                   //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * destinationViewController;              //@synthesize destinationViewController=_destinationViewController - In the implementation block
+(id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(/*^block*/id)arg4 ;
-(id)init;
-(NSString *)identifier;
-(id)sender;
-(void)setSender:(id)arg1 ;
-(UIViewController *)sourceViewController;
-(UIViewController *)destinationViewController;
-(void)perform;
-(id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)setPerformHandler:(id)arg1 ;
-(void)_prepare;
-(id)performHandler;
-(id)prepareHandler;
-(void)setPrepareHandler:(id)arg1 ;
@end

