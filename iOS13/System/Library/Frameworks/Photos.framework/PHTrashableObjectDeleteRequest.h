/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObjectDeleteRequest.h>

@interface PHTrashableObjectDeleteRequest : PHObjectDeleteRequest {

	BOOL _clientEntitledToExpunge;
	long long _operation;

}

@property (nonatomic,readonly) long long operation;                                                        //@synthesize operation=_operation - In the implementation block
@property (getter=isClientEntitledToExpunge,nonatomic,readonly) BOOL clientEntitledToExpunge;              //@synthesize clientEntitledToExpunge=_clientEntitledToExpunge - In the implementation block
+(id)deleteRequestForObject:(id)arg1 ;
+(id)deleteRequestForObject:(id)arg1 operation:(long long)arg2 ;
-(long long)operation;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 operation:(long long)arg3 ;
-(BOOL)isClientEntitledToExpunge;
@end

