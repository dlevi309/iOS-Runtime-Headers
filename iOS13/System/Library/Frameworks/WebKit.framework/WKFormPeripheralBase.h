/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormPeripheral.h>

@class WKContentView;

@interface WKFormPeripheralBase : NSObject <WKFormPeripheral> {

	RetainPtr<NSObject<WKFormControl> >* _control;
	BOOL _editing;
	WKContentView* _view;

}

@property (nonatomic,readonly) WKContentView * view;                          //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSObject*<WKFormControl> control; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                 //@synthesize editing=_editing - In the implementation block
-(void)beginEditing;
-(void)endEditing;
-(WKContentView *)view;
-(id)assistantView;
-(BOOL)isEditing;
-(BOOL)handleKeyEvent:(id)arg1 ;
-(NSObject*<WKFormControl>)control;
-(id)initWithView:(id)arg1 control:(RetainPtr<NSObject<WKFormControl> >*)arg2 ;
@end

