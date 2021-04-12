/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

@class NSUUID;


@protocol TIContactManaging <TIKeyboardActivityObserving>
@property (nonatomic,copy,readonly) NSUUID * contactCollectionUUID; 
@required
-(void)unload;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1;
-(void)removeContactObserver:(/*^block*/id)arg1;
-(void)getOnce:(/*^block*/id)arg1;
-(NSUUID *)contactCollectionUUID;

@end

