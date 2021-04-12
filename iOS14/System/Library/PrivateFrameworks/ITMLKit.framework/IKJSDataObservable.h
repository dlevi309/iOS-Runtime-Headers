/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSDataObservable.h>

@protocol IKJSDataObservable <JSExport>
@required
-(void)touchPropertyPath:(id)arg1;
-(void)setPropertyPath:(id)arg1 :(id)arg2;
-(id)getPropertyPath:(id)arg1;

@end


@class JSManagedValue, NSMutableArray, _IKJSDataDictionaryExporter, NSArray, JSValue;

@interface IKJSDataObservable : IKJSEventListenerObject <IKJSDataObservable> {

	JSManagedValue* _managedTargetValue;
	NSMutableArray* _observerRecords;
	_IKJSDataDictionaryExporter* _exporter;
	BOOL _isBoxed;
	BOOL _observersEnabled;
	IKJSDataObservable* _parent;
	NSArray* _parentAccessorSequence;

}

@property (nonatomic,copy,readonly) NSArray * parentAccessorSequence;              //@synthesize parentAccessorSequence=_parentAccessorSequence - In the implementation block
@property (nonatomic,__weak,readonly) IKJSDataObservable * parent;                 //@synthesize parent=_parent - In the implementation block
@property (nonatomic,__weak,readonly) JSValue * targetValue; 
@property (nonatomic,readonly) BOOL isBoxed;                                       //@synthesize isBoxed=_isBoxed - In the implementation block
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (assign,nonatomic) BOOL observersEnabled;                                //@synthesize observersEnabled=_observersEnabled - In the implementation block
+(id)toDataObservable:(id)arg1 proxy:(id*)arg2 ;
+(id)_proxyHandlerForValue:(id)arg1 boxed:(BOOL)arg2 context:(id)arg3 ;
+(id)toDataObservable:(id)arg1 ;
+(id)jsExportedProperties;
-(IKJSDataObservable *)parent;
-(BOOL)isPlaceholder;
-(id)init;
-(void)setObserversEnabled:(BOOL)arg1 ;
-(JSValue *)targetValue;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isBoxed;
-(BOOL)observersEnabled;
-(void)setTargetValue:(JSValue *)arg1 ;
-(id)valueForPropertyPath:(id)arg1 boxed:(BOOL)arg2 ;
-(id)dataDictionaryObject;
-(NSArray *)parentAccessorSequence;
-(void)touchPropertyPath:(id)arg1 ;
-(id)_initWithTargetValue:(id)arg1 boxed:(BOOL)arg2 ;
-(id)exportValue;
-(void)_updateValueAtPropertyPath:(id)arg1 touch:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 forPropertyPath:(id)arg2 ;
-(id)valueForAccessorSequence:(id)arg1 closestParent:(id*)arg2 accessorSequenceFromClosestParent:(id*)arg3 ;
-(void)touchPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2 ;
-(id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2 ;
-(void)setParent:(id)arg1 accessorSequence:(id)arg2 ;
-(void)setPropertyPath:(id)arg1 :(id)arg2 ;
-(id)getPropertyPath:(id)arg1 ;
-(void)resetValueForPropertyPath:(id)arg1 ;
-(void)addObserver:(id)arg1 forPropertyPathWithString:(id)arg2 ;
-(id)initWithTargetValue:(id)arg1 ;
@end

