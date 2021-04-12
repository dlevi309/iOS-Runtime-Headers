/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UITextCursorAssertion.h>

@class NSString, UITextCursorAssertionController;

@interface _UITextCursorAssertion : NSObject <UITextCursorAssertion> {

	NSString* _reason;
	unsigned long long _options;
	UITextCursorAssertionController* _controller;

}

@property (nonatomic,retain) NSString * reason;                                                //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                       //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) UITextCursorAssertionController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setController:(UITextCursorAssertionController *)arg1 ;
-(NSString *)description;
-(id)_initWithReason:(id)arg1 options:(unsigned long long)arg2 controller:(id)arg3 ;
-(NSString *)reason;
-(void)invalidate;
-(UITextCursorAssertionController *)controller;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
@end

