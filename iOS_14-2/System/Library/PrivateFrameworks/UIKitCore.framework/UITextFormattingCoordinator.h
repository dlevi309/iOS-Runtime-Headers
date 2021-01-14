/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)toggleFontPanel:(id)arg1 ;
+(id)textFormattingCoordinatorForWindowScene:(id)arg1 ;
+(BOOL)isFontPanelVisible;
-(id<UITextFormattingCoordinatorDelegate>)delegate;
-(void)fontPickerViewControllerDidPickFont:(id)arg1 ;
-(void)setSelectedAttributes:(id)arg1 isMultiple:(BOOL)arg2 ;
-(void)setDelegate:(id<UITextFormattingCoordinatorDelegate>)arg1 ;
-(void)updateTextAttributesWithConversionHandler:(/*^block*/id)arg1 ;
-(id)initWithWindowScene:(id)arg1 ;
@end

