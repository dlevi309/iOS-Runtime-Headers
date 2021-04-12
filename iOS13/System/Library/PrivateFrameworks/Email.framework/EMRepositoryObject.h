/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMObject.h>
#import <libobjc.A.dylib/EMRepositoryObject.h>
@class EMRepository;


@protocol EMRepositoryObject <NSObject>
@property (nonatomic,retain) EMRepository * repository; 
@required
-(EMRepository *)repository;
-(void)setRepository:(id)arg1;

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
-(EMRepository *)repository;
-(void)setRepository:(EMRepository *)arg1 ;
@end

