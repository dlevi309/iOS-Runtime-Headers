/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICUserIdentityProperties;

@interface ICUserCredentialResponse : NSObject {

	ICUserIdentityProperties* _identityProperties;
	ICUserIdentityProperties* _iCloudIdentityProperties;

}

@property (nonatomic,copy) ICUserIdentityProperties * identityProperties;                    //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,copy) ICUserIdentityProperties * iCloudIdentityProperties;              //@synthesize iCloudIdentityProperties=_iCloudIdentityProperties - In the implementation block
-(ICUserIdentityProperties *)identityProperties;
-(void)setIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(ICUserIdentityProperties *)iCloudIdentityProperties;
-(void)setICloudIdentityProperties:(ICUserIdentityProperties *)arg1 ;
@end

