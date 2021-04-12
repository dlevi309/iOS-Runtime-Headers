/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/


@class NSString;

@interface AXPhoenixMitigatorConfiguration : NSObject {

	BOOL _disableWhenDisplayOff;
	BOOL _disableWhenDeviceLocked;
	NSString* _disableWhenDisplayOffConfigurationKey;
	NSString* _disableWhenDeviceLockedConfigurationKey;

}

@property (nonatomic,retain) NSString * disableWhenDisplayOffConfigurationKey;                //@synthesize disableWhenDisplayOffConfigurationKey=_disableWhenDisplayOffConfigurationKey - In the implementation block
@property (nonatomic,retain) NSString * disableWhenDeviceLockedConfigurationKey;              //@synthesize disableWhenDeviceLockedConfigurationKey=_disableWhenDeviceLockedConfigurationKey - In the implementation block
@property (assign,nonatomic) BOOL disableWhenDisplayOff;                                      //@synthesize disableWhenDisplayOff=_disableWhenDisplayOff - In the implementation block
@property (assign,nonatomic) BOOL disableWhenDeviceLocked;                                    //@synthesize disableWhenDeviceLocked=_disableWhenDeviceLocked - In the implementation block
-(id)init;
-(id)toDictionary;
-(BOOL)disableWhenDisplayOff;
-(BOOL)disableWhenDeviceLocked;
-(void)_initializeKeys;
-(void)_setDefaultConfiguration;
-(void)_parseFromDictionary:(id)arg1 missingKeys:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 missingKeys:(id)arg2 ;
-(void)setDisableWhenDisplayOffConfigurationKey:(NSString *)arg1 ;
-(void)setDisableWhenDeviceLockedConfigurationKey:(NSString *)arg1 ;
-(void)setDisableWhenDisplayOff:(BOOL)arg1 ;
-(void)setDisableWhenDeviceLocked:(BOOL)arg1 ;
-(NSString *)disableWhenDisplayOffConfigurationKey;
-(NSString *)disableWhenDeviceLockedConfigurationKey;
@end

