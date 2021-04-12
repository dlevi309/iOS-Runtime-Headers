/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodeForXPC;
-(void)setResultType:(unsigned long long)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(BOOL)_secureOperation;
-(void)setShouldPerformSecureOperation:(BOOL)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(unsigned long long)requestType;
-(unsigned long long)resultType;
-(id)description;
-(BOOL)shouldPerformSecureOperation;
-(id)initWithObjectIDs:(id)arg1 ;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(id)initWithFetchRequest:(id)arg1 ;
-(void)dealloc;
@end

