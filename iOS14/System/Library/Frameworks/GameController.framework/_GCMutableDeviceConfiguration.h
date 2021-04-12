/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCDeviceConfiguration.h>

@class NSSet;

@interface _GCMutableDeviceConfiguration : _GCDeviceConfiguration

@property (assign) unsigned long long priority; 
@property (getter=isTransient) BOOL transient; 
@property (copy) id<NSObject><NSCopying><NSSecureCoding> deviceIdentifier; 
@property (copy) NSSet * deviceDependencies; 
@property (copy) id<NSObject><NSCopying><NSSecureCoding> deviceBuilderIdentifier; 
-(void)setDeviceIdentifier:(id<NSObject><NSCopying><NSSecureCoding>)arg1 ;
-(void)setTransient:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)_initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(void)setValue:(id)arg1 forAttribute:(id)arg2 ;
-(void)setDeviceDependencies:(NSSet *)arg1 ;
-(void)setDeviceBuilderIdentifier:(id<NSObject><NSCopying><NSSecureCoding>)arg1 ;
@end

