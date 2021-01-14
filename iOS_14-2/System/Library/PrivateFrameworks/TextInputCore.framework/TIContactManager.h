/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIContactManaging.h>

@class NSUUID, NSString;

@interface TIContactManager : NSObject <TIContactManaging> {

	NSUUID* contactCollectionUUID;

}

@property (nonatomic,copy,readonly) NSUUID * contactCollectionUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedTIContactManager;
+(void)setSharedTIContactManager:(id)arg1 ;
-(void)unload;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(void)getOnce:(/*^block*/id)arg1 ;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(NSUUID *)contactCollectionUUID;
@end

