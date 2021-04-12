/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIFontDescriptor;


@protocol UIFontPicker <NSObject>
@property (nonatomic,retain) UIFontDescriptor * selectedFontDescriptor; 
@property (assign,nonatomic,__weak) id<UIFontPickerDelegate> delegate; 
@required
-(id<UIFontPickerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIFontDescriptor *)selectedFontDescriptor;
-(void)setSelectedFontDescriptor:(id)arg1;

@end

