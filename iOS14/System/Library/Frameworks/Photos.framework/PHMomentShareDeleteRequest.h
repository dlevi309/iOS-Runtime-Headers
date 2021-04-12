/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObjectDeleteRequest.h>

@interface PHMomentShareDeleteRequest : PHObjectDeleteRequest {

	long long _operation;

}

@property (assign,nonatomic) long long operation;              //@synthesize operation=_operation - In the implementation block
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(void)setOperation:(long long)arg1 ;
-(long long)operation;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
@end

