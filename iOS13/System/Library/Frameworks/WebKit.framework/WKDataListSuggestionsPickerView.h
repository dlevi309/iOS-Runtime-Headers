/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <UIKitCore/UIPickerView.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class WKDataListSuggestionsControl;

@interface WKDataListSuggestionsPickerView : UIPickerView <WKFormControl> {

	WKDataListSuggestionsControl* _control;

}

@property (assign,nonatomic,__weak) WKDataListSuggestionsControl * control;              //@synthesize control=_control - In the implementation block
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)setControl:(WKDataListSuggestionsControl *)arg1 ;
-(WKDataListSuggestionsControl *)control;
@end

