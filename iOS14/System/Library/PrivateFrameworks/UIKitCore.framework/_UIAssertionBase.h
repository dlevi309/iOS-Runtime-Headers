/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIAssertion.h>

@class NSString, _UIAssertionController;

@interface _UIAssertionBase : NSObject <_UIAssertion> {

	BOOL _initialState;
	unsigned long long _type;
	NSString* _reason;
	_UIAssertionController* _parentController;

}

@property (nonatomic,readonly) BOOL initialState;                                           //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * reason;                                           //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic,__weak) _UIAssertionController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)initialState;
-(void)setParentController:(_UIAssertionController *)arg1 ;
-(NSString *)description;
-(id)_initWithType:(unsigned long long)arg1 initialState:(BOOL)arg2 reason:(id)arg3 ;
-(NSString *)reason;
-(unsigned long long)type;
-(_UIAssertionController *)parentController;
-(void)dealloc;
@end

