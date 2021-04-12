/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSQueryGenerationToken.h>

@class NSString;

@interface _NSQueryGenerationToken : NSQueryGenerationToken {

	NSString* _storeIdentifier;
	id _store;
	id _generationIdentifier;
	BOOL _isCompound;
	BOOL _isSingleton;
	BOOL _freeValueOnDealloc;
	BOOL _isUnmoored;

}
+(BOOL)supportsSecureCoding;
+(BOOL)identifierIsForNonGenerationalStore:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(id)_generationalComponentForStore:(id)arg1 ;
-(id)initWithValue:(id)arg1 store:(id)arg2 ;
-(id)_retainedPersistentStore;
-(id)_storeIdentifier;
-(id)_initWithValue:(id)arg1 singleton:(BOOL)arg2 ;
-(id)_storesForRequestRoutingFrom:(id)arg1 error:(id*)arg2 ;
-(id)initWithValue:(id)arg1 store:(id)arg2 freeValueOnDealloc:(BOOL)arg3 ;
-(id)_expectedStores;
-(void)_makeConcrete:(BOOL)arg1 ;
-(BOOL)_moor:(id)arg1 error:(id*)arg2 ;
-(id)initWithCompoundValue:(id)arg1 ;
-(id)initForNonGenerationalStore:(id)arg1 ;
-(BOOL)isUnmoored;
-(void)_setIsUnmoored:(BOOL)arg1 ;
-(void)_setFreeValue:(BOOL)arg1 ;
-(void)_setPersistentStoreReference:(id)arg1 ;
@end

