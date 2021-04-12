/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

