/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMObject.h>
#import <libobjc.A.dylib/EMRepositoryObject.h>
@class EMRepository;


@protocol EMRepositoryObject <NSObject>
@property (nonatomic,retain) EMRepository * repository; 
@required
-(void)setRepository:(id)arg1;
-(EMRepository *)repository;

@end


@class EMRepository, NSString;

@interface EMRepositoryObject : EMObject <EMRepositoryObject> {

	EMRepository* _repository;

}

@property (nonatomic,retain) EMRepository * repository;              //@synthesize repository=_repository - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRepository:(EMRepository *)arg1 ;
-(EMRepository *)repository;
@end

