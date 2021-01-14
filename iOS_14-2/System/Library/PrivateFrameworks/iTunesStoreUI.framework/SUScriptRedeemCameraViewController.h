/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, WebScriptObject, SURedeemCameraViewController;

@interface SUScriptRedeemCameraViewController : SUScriptObject {

	NSString* _backButtonTitle;
	WebScriptObject* _codeHandler;
	SURedeemCameraViewController* _redeemCameraViewController;

}

@property (assign,nonatomic,__weak) SURedeemCameraViewController * redeemCameraViewController;              //@synthesize redeemCameraViewController=_redeemCameraViewController - In the implementation block
@property (nonatomic,retain) NSString * backButtonTitle;                                                    //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (nonatomic,retain) WebScriptObject * codeHandler;                                                 //@synthesize codeHandler=_codeHandler - In the implementation block
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)present;
-(id)attributeKeys;
-(id)_className;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(NSString *)backButtonTitle;
-(void)dismiss;
-(void)setCodeHandler:(WebScriptObject *)arg1 ;
-(id)scriptAttributeKeys;
-(void)_performAction:(long long)arg1 withObject:(id)arg2 ;
-(WebScriptObject *)codeHandler;
-(SURedeemCameraViewController *)redeemCameraViewController;
-(void)codeDetected:(id)arg1 ;
-(void)setRedeemCameraViewController:(SURedeemCameraViewController *)arg1 ;
-(void)pauseCamera;
-(void)recognitionError;
-(void)recognitionSuccess;
-(void)resumeCamera;
@end

