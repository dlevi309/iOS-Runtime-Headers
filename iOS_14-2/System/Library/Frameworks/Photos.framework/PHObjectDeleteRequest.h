/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHDeleteChangeRequest.h>

@class NSString, NSManagedObjectID;

@interface PHObjectDeleteRequest : PHChangeRequest <PHDeleteChangeRequest> {

	NSString* _uuid;
	NSManagedObjectID* _objectID;
	BOOL _clientEntitled;
	NSString* _clientName;

}

@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID;                             //@synthesize objectID=_objectID - In the implementation block
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;              //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                    //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deleteRequestForObject:(id)arg1 ;
+(id)deleteRequestsForObjects:(id)arg1 ofType:(Class)arg2 forSelector:(SEL)arg3 ;
+(id)_deleteRequestsForObjects:(id)arg1 ;
-(id)uuid;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)init;
-(NSString *)clientName;
-(BOOL)isClientEntitled;
-(NSManagedObjectID *)objectID;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg1 request:(id)arg2 objectID:(id)arg3 ;
-(NSString *)managedEntityName;
@end

