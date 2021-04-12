/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <libobjc.A.dylib/TMLValue.h>

@class NSString, NSMutableArray;

@interface TMLBinding : NSObject <TMLValue> {

	id _target;
	NSString* _keyPath;
	NSMutableArray* _binders;
	int _bindCount;
	int _flags;
	id _value;
	unsigned long long _valueType;
	BOOL _didAttachToTargetViaTMLObservable;

}

@property (nonatomic,readonly) id target;                           //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bindingForTarget:(id)arg1 withKeyPath:(id)arg2 ;
+(id)bindingForTarget:(id)arg1 withKeyPath:(id)arg2 valueType:(unsigned long long)arg3 ;
-(unsigned long long)valueType;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)bind:(id)arg1 ;
-(id)target;
-(id)value;
-(void)dealloc;
-(void)unbind:(id)arg1 ;
-(void)unobserveTarget;
-(void)observeTarget;
-(void)tmlObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithTarget:(id)arg1 keyPath:(id)arg2 valueType:(unsigned long long)arg3 ;
@end

