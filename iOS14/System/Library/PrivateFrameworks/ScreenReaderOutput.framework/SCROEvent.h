/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@class NSMutableArray, NSMutableDictionary;

@interface SCROEvent : NSObject {

	int _handlerType;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _setDictionary;
	NSMutableDictionary* _getDictionary;
	NSMutableArray* _actions;
	BOOL _readOnly;

}
+(id)brailleEvent;
-(id)initForHandlerType:(int)arg1 ;
-(void)requestSetValue:(id)arg1 forKey:(int)arg2 ;
-(id)mainDictionary;
-(void)setClaimDictionary:(id)arg1 ;
-(int)handlerType;
-(void)requestRegisterCallbackForKey:(int)arg1 ;
-(void)requestValueForKey:(int)arg1 ;
-(void)requestPerformActionForKey:(int)arg1 ;
-(id)claimValueForKey:(int)arg1 ;
-(void)setMainDictionary:(id)arg1 ;
-(id)claimDictionary;
-(void)performWithHandler:(id)arg1 trusted:(BOOL)arg2 ;
@end

