/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STSerializableMappedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class NSString, NSSet;

@interface STTestSyncableObject : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSSet * subobjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializableClassName;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)computeUniqueIdentifier;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
@end

