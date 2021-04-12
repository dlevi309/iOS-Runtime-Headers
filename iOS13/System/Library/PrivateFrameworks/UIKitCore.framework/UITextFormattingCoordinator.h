/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIFontPickerViewControllerDelegate.h>

@protocol UITextFormattingCoordinatorDelegate;
@class NSString;

@interface UITextFormattingCoordinator : NSObject <UIFontPickerViewControllerDelegate> {

	id<UITextFormattingCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UITextFormattingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textFormattingCoordinatorForWindowScene:(id)arg1 ;
+(BOOL)isFontPanelVisible;
+(void)toggleFontPanel:(id)arg1 ;
-(id<UITextFormattingCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<UITextFormattingCoordinatorDelegate>)arg1 ;
-(id)initWithWindowScene:(id)arg1 ;
-(void)updateTextAttributesWithConversionHandler:(/*^block*/id)arg1 ;
-(void)fontPickerViewControllerDidPickFont:(id)arg1 ;
-(void)setSelectedAttributes:(id)arg1 isMultiple:(BOOL)arg2 ;
@end

