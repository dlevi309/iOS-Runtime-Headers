/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol SiriUIViewController;
#import <SiriUI/SiriUI-Structs.h>
@class NSUUID, UIViewController, AceObject;

@interface SiriUITranscriptItem : NSObject {

	BOOL _restored;
	BOOL _shouldBeExposed;
	BOOL _snippetViewControllerHasBeenUnloaded;
	NSUUID* _itemIdentifier;
	UIViewController*<SiriUIViewController> _viewController;
	AceObject* _aceObject;
	CGRect _previousFrame;

}

@property (nonatomic,copy) NSUUID * itemIdentifier;                                               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) UIViewController*<SiriUIViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) AceObject * aceObject;                                               //@synthesize aceObject=_aceObject - In the implementation block
@property (assign,getter=isRestored,nonatomic) BOOL restored;                                     //@synthesize restored=_restored - In the implementation block
@property (assign,nonatomic) BOOL shouldBeExposed;                                                //@synthesize shouldBeExposed=_shouldBeExposed - In the implementation block
@property (assign,nonatomic) BOOL snippetViewControllerHasBeenUnloaded;                           //@synthesize snippetViewControllerHasBeenUnloaded=_snippetViewControllerHasBeenUnloaded - In the implementation block
@property (assign,nonatomic) CGRect previousFrame;                                                //@synthesize previousFrame=_previousFrame - In the implementation block
+(id)transcriptItemWithAceObject:(id)arg1 ;
-(id)description;
-(NSUUID *)itemIdentifier;
-(void)setItemIdentifier:(NSUUID *)arg1 ;
-(void)setViewController:(UIViewController*<SiriUIViewController>)arg1 ;
-(UIViewController*<SiriUIViewController>)viewController;
-(AceObject *)aceObject;
-(void)setAceObject:(AceObject *)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(BOOL)isRestored;
-(void)setRestored:(BOOL)arg1 ;
-(BOOL)shouldBeExposed;
-(void)setShouldBeExposed:(BOOL)arg1 ;
-(BOOL)snippetViewControllerHasBeenUnloaded;
-(void)setSnippetViewControllerHasBeenUnloaded:(BOOL)arg1 ;
-(CGRect)previousFrame;
-(void)setPreviousFrame:(CGRect)arg1 ;
@end

