/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIAlertController.h>

@interface BEAlertController : UIAlertController {

	BOOL _isSheet;
	long long _alertTag;

}

@property (assign,nonatomic) BOOL isSheet;                    //@synthesize isSheet=_isSheet - In the implementation block
@property (assign,nonatomic) long long alertTag;              //@synthesize alertTag=_alertTag - In the implementation block
+(id)showOneButtonAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonHandler:(/*^block*/id)arg4 ;
+(id)showOneButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 buttonTitle:(id)arg4 buttonHandler:(/*^block*/id)arg5 ;
+(id)showTwoButtonAlertWithTitle:(id)arg1 message:(id)arg2 button1Title:(id)arg3 button1Style:(long long)arg4 button1Handler:(/*^block*/id)arg5 button2Title:(id)arg6 button2Style:(long long)arg7 button2Handler:(/*^block*/id)arg8 ;
+(id)showTwoButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 button1Title:(id)arg4 button1Style:(long long)arg5 button1Handler:(/*^block*/id)arg6 button2Title:(id)arg7 button2Style:(long long)arg8 button2Handler:(/*^block*/id)arg9 ;
-(long long)textFieldCount;
-(long long)buttonCount;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isSheet;
-(void)setIsSheet:(BOOL)arg1 ;
-(id)cancelButtonAction;
-(void)showAnimated:(BOOL)arg1 ;
-(void)dismissWithNoActionAnimated:(BOOL)arg1 ;
-(void)dismissWithCancelActionAnimated:(BOOL)arg1 ;
-(id)initAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(id)addAlertCancelButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(/*^block*/id)arg3 ;
-(id)initSheetWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showOnViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)addAlertButtonWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(/*^block*/id)arg4 ;
-(id)initWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3 ;
-(id)buttonActionWithTag:(long long)arg1 ;
-(id)textFieldWithTag:(long long)arg1 ;
-(void)addAlertButton:(id)arg1 ;
-(id)addAlertButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(/*^block*/id)arg3 ;
-(id)addAlertDestructiveButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(/*^block*/id)arg3 ;
-(void)addAlertTextFieldWithTag:(long long)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(void)showInView:(id)arg1 viewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(void)dismissWithActionForTag:(long long)arg1 animated:(BOOL)arg2 ;
-(id)textInFieldWithTag:(long long)arg1 ;
-(long long)alertTag;
-(void)setAlertTag:(long long)arg1 ;
@end

