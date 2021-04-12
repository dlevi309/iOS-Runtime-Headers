/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class ICUserIdentityProperties;

@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject {

	ICUserIdentityProperties* _identityProperties;
	ICUserIdentityProperties* _delegatedIdentityProperties;

}

@property (nonatomic,copy) ICUserIdentityProperties * identityProperties;                       //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,copy) ICUserIdentityProperties * delegatedIdentityProperties;              //@synthesize delegatedIdentityProperties=_delegatedIdentityProperties - In the implementation block
+(void)identityPropertySetFromRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ICUserIdentityProperties *)identityProperties;
-(void)setIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(ICUserIdentityProperties *)delegatedIdentityProperties;
-(id)initWithIdentityProperties:(id)arg1 delegatedIdentityProperties:(id)arg2 ;
-(void)setDelegatedIdentityProperties:(ICUserIdentityProperties *)arg1 ;
@end

