/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {

	unsigned long long _resultType;
	NSFetchRequest* _deleteTarget;
	long long _flags;

}

@property (assign) unsigned long long resultType;                     //@synthesize resultType=_resultType - In the implementation block
@property (copy,readonly) NSFetchRequest * fetchRequest; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)resultType;
-(NSFetchRequest *)fetchRequest;
-(void)setResultType:(unsigned long long)arg1 ;
-(id)initWithFetchRequest:(id)arg1 ;
-(unsigned long long)requestType;
-(id)encodeForXPC;
-(BOOL)_secureOperation;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(void)setShouldPerformSecureOperation:(BOOL)arg1 ;
-(BOOL)shouldPerformSecureOperation;
-(id)initWithObjectIDs:(id)arg1 ;
@end

