/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class WFRecordProperty;

@interface WFRecordPropertyMapping : NSObject {

	id _sourceObject;
	WFRecordProperty* _sourceProperty;
	id _destinationObject;
	WFRecordProperty* _destinationProperty;

}

@property (assign,nonatomic,__weak) id sourceObject;                              //@synthesize sourceObject=_sourceObject - In the implementation block
@property (nonatomic,retain) WFRecordProperty * sourceProperty;                   //@synthesize sourceProperty=_sourceProperty - In the implementation block
@property (assign,nonatomic,__weak) id destinationObject;                         //@synthesize destinationObject=_destinationObject - In the implementation block
@property (nonatomic,retain) WFRecordProperty * destinationProperty;              //@synthesize destinationProperty=_destinationProperty - In the implementation block
-(id)getterMethodSignature;
-(SEL)setterSelector;
-(SEL)getterSelector;
-(id)setterMethodSignature;
-(void)setSourceObject:(id)arg1 ;
-(id)sourceObject;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSourceObject:(id)arg1 property:(id)arg2 destinationObject:(id)arg3 property:(id)arg4 ;
-(void)propagate;
-(void)propagate:(BOOL)arg1 ;
-(void)propagateUsingKVC;
-(void)propagateUsingSetter;
-(void)invokeGetterWithBuffer:(void*)arg1 length:(unsigned long long*)arg2 ;
-(void)invokeSetterWithBuffer:(void*)arg1 length:(unsigned long long*)arg2 ;
-(WFRecordProperty *)sourceProperty;
-(void)setSourceProperty:(WFRecordProperty *)arg1 ;
-(id)destinationObject;
-(void)setDestinationObject:(id)arg1 ;
-(WFRecordProperty *)destinationProperty;
-(void)setDestinationProperty:(WFRecordProperty *)arg1 ;
@end

