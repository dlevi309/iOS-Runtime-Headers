/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)target;
-(id)value;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)valueType;
-(void)bind:(id)arg1 ;
-(void)unbind:(id)arg1 ;
-(void)unobserveTarget;
-(void)observeTarget;
-(void)tmlObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithTarget:(id)arg1 keyPath:(id)arg2 valueType:(unsigned long long)arg3 ;
@end

