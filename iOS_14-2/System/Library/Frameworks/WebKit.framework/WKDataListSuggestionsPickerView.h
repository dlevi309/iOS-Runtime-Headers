/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <UIKitCore/UIPickerView.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class WKDataListSuggestionsControl;

@interface WKDataListSuggestionsPickerView : UIPickerView <WKFormControl> {

	WKDataListSuggestionsControl* _control;

}

@property (assign,nonatomic,__weak) WKDataListSuggestionsControl * control;              //@synthesize control=_control - In the implementation block
-(WKDataListSuggestionsControl *)control;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)setControl:(WKDataListSuggestionsControl *)arg1 ;
@end

