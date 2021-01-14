/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStatusBarSystemNavigationItemView.h>

@class UISystemNavigationAction, NSString;

@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView {

	UISystemNavigationAction* _systemNavigationAction;
	NSString* _destinationText;

}

@property (nonatomic,retain) UISystemNavigationAction * systemNavigationAction;              //@synthesize systemNavigationAction=_systemNavigationAction - In the implementation block
@property (nonatomic,retain) NSString * destinationText;                                     //@synthesize destinationText=_destinationText - In the implementation block
-(id)_displayStringFromURL:(id)arg1 ;
-(id)_nominalTitleWithDestinationText:(id)arg1 ;
-(BOOL)layoutImageOnTrailingEdge;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setDestinationText:(NSString *)arg1 ;
-(void)setSystemNavigationAction:(UISystemNavigationAction *)arg1 ;
-(NSString *)destinationText;
-(UISystemNavigationAction *)systemNavigationAction;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(void)userDidActivateButton:(id)arg1 ;
@end

