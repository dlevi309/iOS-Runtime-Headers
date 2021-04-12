/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@class NSString;

@interface SFSharedWebCredentialsDatabaseEntry : NSObject {

	BOOL _approved;
	NSString* _domain;
	NSString* _appID;
	long long _service;

}

@property (nonatomic,copy,readonly) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSString * appID;                        //@synthesize appID=_appID - In the implementation block
@property (nonatomic,readonly) long long service;                            //@synthesize service=_service - In the implementation block
@property (getter=isApproved,nonatomic,readonly) BOOL approved;              //@synthesize approved=_approved - In the implementation block
-(NSString *)appID;
-(NSString *)domain;
-(id)description;
-(BOOL)isApproved;
-(long long)service;
-(id)_initWithDomain:(id)arg1 appID:(id)arg2 service:(long long)arg3 isApproved:(BOOL)arg4 ;
-(id)initWithServiceDetails:(id)arg1 ;
@end

