/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)sender;
-(void)setSender:(id)arg1 ;
-(id)init;
-(void)perform;
-(void)_prepare;
-(UIViewController *)destinationViewController;
-(id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(id)performHandler;
-(void)setPerformHandler:(id)arg1 ;
-(id)prepareHandler;
-(void)setPrepareHandler:(id)arg1 ;
-(NSString *)identifier;
-(UIViewController *)sourceViewController;
@end

