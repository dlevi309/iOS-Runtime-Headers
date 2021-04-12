/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableString, NSString;

@interface TPPasscodeView : UIView {

	NSMutableString* _passcodeMutableString;

}

@property (retain) NSMutableString * passcodeMutableString;              //@synthesize passcodeMutableString=_passcodeMutableString - In the implementation block
@property (readonly) NSString * passcodeString; 
-(void)clear;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)deleteLastCharacter;
-(NSString *)passcodeString;
-(void)appendCharacter:(id)arg1 ;
-(void)setPasscodeMutableString:(NSMutableString *)arg1 ;
-(NSMutableString *)passcodeMutableString;
@end

