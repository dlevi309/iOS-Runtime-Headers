/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStatusBarSystemNavigationItemView.h>

@class UISystemNavigationAction, NSString;

@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView {

	UISystemNavigationAction* _systemNavigationAction;
	NSString* _destinationText;

}

@property (nonatomic,retain) UISystemNavigationAction * systemNavigationAction;              //@synthesize systemNavigationAction=_systemNavigationAction - In the implementation block
@property (nonatomic,retain) NSString * destinationText;                                     //@synthesize destinationText=_destinationText - In the implementation block
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)extraRightPadding;
-(void)setDestinationText:(NSString *)arg1 ;
-(void)setSystemNavigationAction:(UISystemNavigationAction *)arg1 ;
-(NSString *)destinationText;
-(UISystemNavigationAction *)systemNavigationAction;
-(long long)labelLineBreakMode;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(void)userDidActivateButton:(id)arg1 ;
@end

