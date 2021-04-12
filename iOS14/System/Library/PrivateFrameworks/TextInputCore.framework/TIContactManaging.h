/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

@class NSUUID;


@protocol TIContactManaging <TIKeyboardActivityObserving>
@property (nonatomic,copy,readonly) NSUUID * contactCollectionUUID; 
@required
-(void)unload;
-(void)removeContactObserver:(/*^block*/id)arg1;
-(void)getOnce:(/*^block*/id)arg1;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1;
-(NSUUID *)contactCollectionUUID;

@end

