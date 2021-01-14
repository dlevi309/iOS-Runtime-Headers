/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSKeyboard.h>
@class NSString, JSValue;


@protocol IKJSKeyboard <JSExport>
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) JSValue * suggestions; 
@required
-(JSValue *)suggestions;
-(void)setSuggestions:(id)arg1;
-(void)setText:(id)arg1;
-(NSString *)text;

@end

#import <libobjc.A.dylib/_IKJSKeyboardProxy.h>
#import <libobjc.A.dylib/_IKJSKeyboard.h>

@protocol IKAppKeyboardBridge;
@class NSString, JSValue;

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard, _IKJSKeyboardProxy, _IKJSKeyboard> {

	id<IKAppKeyboardBridge> _appBridge;

}

@property (nonatomic,retain) id<IKAppKeyboardBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) JSValue * suggestions; 
@property (nonatomic,copy) JSValue * hints; 
-(JSValue *)hints;
-(JSValue *)suggestions;
-(void)setSuggestions:(JSValue *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setHints:(JSValue *)arg1 ;
-(NSString *)text;
-(void)setAppBridge:(id<IKAppKeyboardBridge>)arg1 ;
-(id<IKAppKeyboardBridge>)appBridge;
-(id)asPrivateIKJSKeyboard;
-(void)jsTextDidChange;
-(void)jsDidSelectHint:(id)arg1 ;
@end

