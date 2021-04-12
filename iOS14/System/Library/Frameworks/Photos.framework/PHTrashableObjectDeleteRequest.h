/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObjectDeleteRequest.h>

@interface PHTrashableObjectDeleteRequest : PHObjectDeleteRequest {

	BOOL _clientEntitledToExpunge;
	long long _operation;

}

@property (nonatomic,readonly) long long operation;                                                        //@synthesize operation=_operation - In the implementation block
@property (getter=isClientEntitledToExpunge,nonatomic,readonly) BOOL clientEntitledToExpunge;              //@synthesize clientEntitledToExpunge=_clientEntitledToExpunge - In the implementation block
+(id)deleteRequestForObject:(id)arg1 operation:(long long)arg2 ;
+(id)deleteRequestForObject:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(long long)operation;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 operation:(long long)arg3 ;
-(BOOL)isClientEntitledToExpunge;
@end

