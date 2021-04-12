/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
*/


@class NSSet;

@interface BRButtonResolverController : NSObject {

	NSSet* _interfaces;

}

@property (nonatomic,readonly) BOOL isReady; 
@property (nonatomic,readonly) id propertyList; 
@property (nonatomic,readonly) unsigned long long maxAssetSlots; 
@property (nonatomic,readonly) unsigned long long unusedAssetSlots; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)propertyList;
-(BOOL)isReady;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)scheduleReadyNotificationOnDispatchQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

