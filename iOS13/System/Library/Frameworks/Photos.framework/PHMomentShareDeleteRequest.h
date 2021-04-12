/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObjectDeleteRequest.h>

@interface PHMomentShareDeleteRequest : PHObjectDeleteRequest {

	long long _operation;

}

@property (assign,nonatomic) long long operation;              //@synthesize operation=_operation - In the implementation block
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
@end

