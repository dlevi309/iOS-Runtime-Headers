/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKAppKeyboardBridge.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppKeyboardDelegate;
@class NSString, JSValue, JSManagedValue, IKAppContext, NSArray, IKJSKeyboard;

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature> {

	JSManagedValue* _jsHints;
	NSString* _jsText;
	NSString* _jsSource;
	NSString* _featureName;
	IKAppContext* _appContext;
	id<IKAppKeyboardDelegate> _delegate;
	NSString* _text;
	NSArray* _hints;
	IKJSKeyboard* _jsKeyboard;
	NSString* _source;

}

@property (assign,setter=setJSKeyboard:,nonatomic,__weak) IKJSKeyboard * jsKeyboard;              //@synthesize jsKeyboard=_jsKeyboard - In the implementation block
@property (setter=_setSource:,getter=_source,nonatomic,copy) NSString * source;                   //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppKeyboardDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hints;                                              //@synthesize hints=_hints - In the implementation block
@property (setter=setJSText:,nonatomic,copy) NSString * jsText;                                   //@synthesize jsText=_jsText - In the implementation block
@property (setter=setJSSource:,nonatomic,copy) NSString * jsSource;                               //@synthesize jsSource=_jsSource - In the implementation block
@property (setter=setJSHints:,nonatomic,copy) JSValue * jsHints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                       //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                                  //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(NSArray *)hints;
-(id<IKAppKeyboardDelegate>)delegate;
-(void)setText:(NSString *)arg1 ;
-(NSString *)jsText;
-(void)setDelegate:(id<IKAppKeyboardDelegate>)arg1 ;
-(NSString *)text;
-(JSValue *)jsHints;
-(IKAppContext *)appContext;
-(void)_setSource:(id)arg1 ;
-(id)_source;
-(NSString *)featureName;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)setJSText:(id)arg1 ;
-(void)setJSHints:(id)arg1 ;
-(NSString *)jsSource;
-(void)setJSKeyboard:(id)arg1 ;
-(IKJSKeyboard *)jsKeyboard;
-(void)_setText:(id)arg1 then:(/*^block*/id)arg2 ;
-(void)setJSSource:(id)arg1 ;
-(void)didSelectHintWithText:(id)arg1 searchTerm:(id)arg2 ;
@end

