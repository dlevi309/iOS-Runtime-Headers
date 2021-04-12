/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <libobjc.A.dylib/TMLBinder.h>
#import <libobjc.A.dylib/TMLValue.h>

@class NSArray, NSString;

@interface TMLReactiveValue : NSObject <TMLBinder, TMLValue> {

	NSArray* _bindings;
	id _targetWeak;
	id _targetUnsafe;
	NSString* _keyPath;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) NSArray * bindings;                  //@synthesize bindings=_bindings - In the implementation block
@property (nonatomic,readonly) long long bindingOrder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)valueForTarget:(id)arg1 withKeyPath:(id)arg2 ;
+(void)removeReactiveValuesForTarget:(id)arg1 ;
-(unsigned long long)valueType;
-(id)value;
-(NSArray *)bindings;
-(void)bindingValueChanged:(id)arg1 ;
-(long long)bindingOrder;
-(void)unassign;
-(void)assignToTarget:(id)arg1 withKeyPath:(id)arg2 ;
-(id)initWithBindings:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

