/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICUserIdentityProperties;

@interface ICUserCredentialResponse : NSObject {

	ICUserIdentityProperties* _identityProperties;
	ICUserIdentityProperties* _iCloudIdentityProperties;

}

@property (nonatomic,copy) ICUserIdentityProperties * identityProperties;                    //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,copy) ICUserIdentityProperties * iCloudIdentityProperties;              //@synthesize iCloudIdentityProperties=_iCloudIdentityProperties - In the implementation block
-(void)setIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(ICUserIdentityProperties *)identityProperties;
-(void)setICloudIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(ICUserIdentityProperties *)iCloudIdentityProperties;
@end

