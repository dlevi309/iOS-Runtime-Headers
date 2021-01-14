/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObjectDeleteRequest.h>

@interface PHPersonDeleteRequest : PHObjectDeleteRequest {

	BOOL _force;

}

@property (assign,nonatomic) BOOL force;              //@synthesize force=_force - In the implementation block
-(BOOL)force;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(void)setForce:(BOOL)arg1 ;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
@end

