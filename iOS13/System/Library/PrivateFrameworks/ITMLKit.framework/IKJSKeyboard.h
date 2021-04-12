/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSKeyboard.h>
@class NSString;


@protocol IKJSKeyboard <JSExport>
@property (nonatomic,copy) NSString * text; 
@required
-(NSString *)text;
-(void)setText:(id)arg1;

@end


@protocol IKAppKeyboardBridge;
@class NSString;

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard> {

	id<IKAppKeyboardBridge> _appBridge;

}

@property (nonatomic,retain) id<IKAppKeyboardBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setAppBridge:(id<IKAppKeyboardBridge>)arg1 ;
-(id<IKAppKeyboardBridge>)appBridge;
-(void)jsTextDidChange;
@end

