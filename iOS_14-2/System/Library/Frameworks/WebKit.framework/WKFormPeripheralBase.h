/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)handleKeyEvent:(id)arg1 ;
-(NSObject*<WKFormControl>)control;
-(id)assistantView;
-(BOOL)isEditing;
-(WKContentView *)view;
-(void)endEditing;
-(id)initWithView:(id)arg1 control:(RetainPtr<NSObject<WKFormControl> >*)arg2 ;
-(void)beginEditing;
@end

