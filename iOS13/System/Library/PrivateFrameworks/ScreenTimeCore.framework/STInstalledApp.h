/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class NSString, STUserDeviceState, NSData;

@interface STInstalledApp : STUniquedManagedObject <STUniquelySerializableManagedObject>

@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,retain) STUserDeviceState * userDeviceState; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSData * iconData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)computeUniqueIdentifier;
@end

