/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class NSString, NSData, STBlueprint;

@interface STBlueprintConfiguration : NSManagedObject <STSyncableSubObject, STUniquelySerializableManagedObject>

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) NSData * payloadPlist; 
@property (nonatomic,retain) STBlueprint * blueprint; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 ;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)blueprintConfigurationTypeForDeclaration:(id)arg1 ;
+(id)cemConfigurationIdentifierWithType:(id)arg1 forUser:(id)arg2 ;
+(Class)cemDeclarationClassForConfigurationType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id<STSerializableManagedObject>)syncableRootObject;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)cemConfiguration;
-(void)setCemConfiguration:(id)arg1 ;
@end

