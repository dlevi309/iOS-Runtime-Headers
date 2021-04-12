/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(void)scheduleReadyNotificationOnDispatchQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)description;
-(BOOL)isReady;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(id)propertyList;
-(BOOL)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

