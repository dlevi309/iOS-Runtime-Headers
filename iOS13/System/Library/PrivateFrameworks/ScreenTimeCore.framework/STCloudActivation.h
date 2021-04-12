/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STReconcilableObject.h>
#import <libobjc.A.dylib/STSerializableManagedObject.h>

@class NSData, NSString, NSUUID;

@interface STCloudActivation : STUniquedManagedObject <STReconcilableObject, STSerializableManagedObject>

@property (assign,nonatomic) long long activationType; 
@property (nonatomic,retain) NSData * activationPlist; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSUUID * sortKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)computeUniqueIdentifier;
@end

