/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKBTutorialModalDisplay.h>

@class NSLayoutConstraint;

@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay {

	NSLayoutConstraint* _topPaddingConstraint;

}

@property (nonatomic,readonly) long long appearance; 
@property (nonatomic,retain) NSLayoutConstraint * topPaddingConstraint;              //@synthesize topPaddingConstraint=_topPaddingConstraint - In the implementation block
+(BOOL)shouldShowEditingIntroduction;
-(id)textBodyFont;
-(id)buttonTitle;
-(void)extraButtonTapAction;
-(id)mediaContents;
-(id)textTitleDescriptions;
-(id)textBodyDescriptions;
-(void)updateConstraints;
-(NSLayoutConstraint *)topPaddingConstraint;
-(id)animatedTutorialViewNamed:(id)arg1 ofType:(id)arg2 needsFrame:(BOOL)arg3 ;
-(void)setTopPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(double)pagingInterval;
-(BOOL)presentsFullScreen;
@end

