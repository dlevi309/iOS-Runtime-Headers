/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STSerializableMappedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class NSString, STUserDeviceState, NSData;

@interface STInstalledApp : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,retain) STUserDeviceState * userDeviceState; 
@property (assign,nonatomic) BOOL installedLocally; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSData * iconData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializableClassName;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)computeUniqueIdentifier;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)setUserDeviceState:(STUserDeviceState *)arg1 ;
@end

