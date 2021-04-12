/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)interface;
+(id)interfaces;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)propertyList;
-(BOOL)isReady;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)scheduleReadyNotificationWithBlock:(/*^block*/id)arg1 ;
-(void)timestampWithLabel:(id)arg1 ;
@end

