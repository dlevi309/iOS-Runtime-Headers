/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSQueryGenerationToken.h>

@class NSString, _PFWeakReference;

@interface _NSQueryGenerationToken : NSQueryGenerationToken {

	NSString* _storeIdentifier;
	_PFWeakReference* _store;
	id _generationIdentifier;
	struct {
		unsigned _isCompound : 1;
		unsigned _isSingleton : 1;
		unsigned _freeValueOnDealloc : 1;
		unsigned _isUnmoored : 1;
		unsigned _reservedFlags : 12;
	}  _flags;

}
+(BOOL)supportsSecureCoding;
-(oneway void)release;
-(id)persistentStoreCoordinator;
-(id)retain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)autorelease;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

