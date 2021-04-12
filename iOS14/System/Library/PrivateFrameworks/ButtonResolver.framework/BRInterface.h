/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BRInterface : NSObject {

	NSMutableDictionary* _timestampDict;
	BOOL _isReady;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _maxAssetSlots;
	unsigned long long _unusedAssetSlots;

}

@property (nonatomic,readonly) BOOL isReady;                                     //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned long long maxAssetSlots;                 //@synthesize maxAssetSlots=_maxAssetSlots - In the implementation block
@property (nonatomic,readonly) unsigned long long unusedAssetSlots;              //@synthesize unusedAssetSlots=_unusedAssetSlots - In the implementation block
@property (nonatomic,readonly) id propertyList; 
+(id)interfaces;
+(id)interface;
-(id)init;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(id)description;
-(BOOL)isReady;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(void)scheduleReadyNotificationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(id)propertyList;
-(BOOL)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)timestampWithLabel:(id)arg1 ;
@end

