/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID;                             //@synthesize objectID=_objectID - In the implementation block
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;              //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                    //@synthesize clientName=_clientName - In the implementation block
+(id)deleteRequestForObject:(id)arg1 ;
+(id)deleteRequestsForObjects:(id)arg1 ofType:(Class)arg2 forSelector:(SEL)arg3 ;
+(id)_deleteRequestsForObjects:(id)arg1 ;
-(id)init;
-(id)uuid;
-(NSManagedObjectID *)objectID;
-(NSString *)clientName;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(NSString *)managedEntityName;
-(BOOL)isClientEntitled;
-(id)initForNewObject;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithUUID:(id)arg1 request:(id)arg2 objectID:(id)arg3 ;
@end

