/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIContactManaging.h>

@class NSUUID, NSString;

@interface TIContactManager : NSObject <TIContactManaging> {

	NSUUID* contactCollectionUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * contactCollectionUUID; 
+(id)singletonInstance;
+(id)sharedTIContactManager;
+(void)setSharedTIContactManager:(id)arg1 ;
-(void)unload;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(void)getOnce:(/*^block*/id)arg1 ;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(NSUUID *)contactCollectionUUID;
@end

