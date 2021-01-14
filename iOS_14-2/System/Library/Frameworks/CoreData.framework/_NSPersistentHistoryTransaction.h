/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentHistoryTransaction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSData, NSPersistentStoreCoordinator, NSManagedObjectID;

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {

	long long _rowIdentifier;
	double _timestamp;
	NSArray* _changes;
	NSString* _storeID;
	NSString* _bundleID;
	NSString* _processID;
	NSString* _contextName;
	NSString* _author;
	NSData* _queryGeneration;
	NSPersistentStoreCoordinator* _coordinator;
	NSManagedObjectID* _backingObjectID;

}
+(BOOL)supportsSecureCoding;
-(id)changes;
-(id)storeID;
-(id)processID;
-(id)author;
-(id)objectIDNotification;
-(id)contextName;
-(id)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initialQueryGenerationToken;
-(id)postQueryGenerationToken;
-(id)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(long long)transactionNumber;
-(id)token;
-(void)dealloc;
@end

