/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, _UICompoundObjectMap, NSMutableSet;

@interface _UIViewAnimatablePropertyTransformer : NSObject {

	BOOL _presentationValueCallbackRan;
	NSObject*<OS_dispatch_queue> _lockingQueue;
	/*^block*/id _modelValueChangedCallback;
	/*^block*/id _presentationValueChangedCallback;
	/*^block*/id _stabilizedCallback;
	_UICompoundObjectMap* _capturedProperties;
	NSMutableSet* _runningProgresses;

}

@property (nonatomic,copy) id modelValueChangedCallback;                             //@synthesize modelValueChangedCallback=_modelValueChangedCallback - In the implementation block
@property (nonatomic,copy) id presentationValueChangedCallback;                      //@synthesize presentationValueChangedCallback=_presentationValueChangedCallback - In the implementation block
@property (nonatomic,copy) id stabilizedCallback;                                    //@synthesize stabilizedCallback=_stabilizedCallback - In the implementation block
@property (nonatomic,retain) _UICompoundObjectMap * capturedProperties;              //@synthesize capturedProperties=_capturedProperties - In the implementation block
@property (nonatomic,retain) NSMutableSet * runningProgresses;                       //@synthesize runningProgresses=_runningProgresses - In the implementation block
-(void)setCapturedProperties:(_UICompoundObjectMap *)arg1 ;
-(void)presentationValueUpdatedForProgress:(id)arg1 ;
-(_UICompoundObjectMap *)capturedProperties;
-(id)modelValueChangedCallback;
-(void)performWithLock:(/*^block*/id)arg1 ;
-(void)modelValueUpdatedForProgress:(id)arg1 ;
-(id)presentationValueChangedCallback;
-(void)setPresentationValueChangedCallback:(id)arg1 ;
-(void)setStabilizedCallback:(id)arg1 ;
-(id)stabilizedCallback;
-(id)initWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(/*^block*/id)arg2 ;
-(id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 stabilizedCallback:(/*^block*/id)arg4 allowsProgressAnimatableProperties:(BOOL)arg5 ;
-(id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 stabilizedCallback:(/*^block*/id)arg4 ;
-(void)setRunningProgresses:(NSMutableSet *)arg1 ;
-(NSMutableSet *)runningProgresses;
-(void)presentationValueStabilizedForProgress:(id)arg1 ;
-(id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 ;
-(void)progressInvalidated:(id)arg1 ;
-(id)initWithProgressAnimatableProperty:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 ;
-(void)setModelValueChangedCallback:(id)arg1 ;
@end

