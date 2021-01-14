/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)buttonTitle;
-(id)animatedTutorialViewNamed:(id)arg1 ofType:(id)arg2 needsFrame:(BOOL)arg3 ;
-(id)textBodyFont;
-(void)updateConstraints;
-(id)mediaContents;
-(void)extraButtonTapAction;
-(id)textBodyDescriptions;
-(id)textTitleDescriptions;
-(double)pagingInterval;
-(NSLayoutConstraint *)topPaddingConstraint;
-(void)setTopPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)presentsFullScreen;
@end

