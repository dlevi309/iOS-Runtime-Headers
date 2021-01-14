/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)itemIdentifier;
-(void)setViewController:(UIViewController*<SiriUIViewController>)arg1 ;
-(void)setItemIdentifier:(NSUUID *)arg1 ;
-(id)description;
-(UIViewController*<SiriUIViewController>)viewController;
-(id)initWithAceObject:(id)arg1 ;
-(void)setAceObject:(AceObject *)arg1 ;
-(AceObject *)aceObject;
-(BOOL)isRestored;
-(void)setRestored:(BOOL)arg1 ;
-(BOOL)shouldBeExposed;
-(void)setShouldBeExposed:(BOOL)arg1 ;
-(BOOL)snippetViewControllerHasBeenUnloaded;
-(void)setSnippetViewControllerHasBeenUnloaded:(BOOL)arg1 ;
-(CGRect)previousFrame;
-(void)setPreviousFrame:(CGRect)arg1 ;
@end

