/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSString, ICURLBag, NSNumber, ICDelegateToken;

@interface ICStoreURLRequestBuilderProperties : NSObject {

	NSString* _iCloudPersonID;
	ICURLBag* _URLBag;
	NSNumber* _DSID;
	NSString* _storefrontIdentifier;
	NSNumber* _delegatedDSID;
	NSString* _delegatedStorefrontIdentifier;
	ICDelegateToken* _delegateToken;
	ICURLBag* _delegatedURLBag;

}

@property (nonatomic,copy) NSString * iCloudPersonID;                             //@synthesize iCloudPersonID=_iCloudPersonID - In the implementation block
@property (nonatomic,retain) ICURLBag * URLBag;                                   //@synthesize URLBag=_URLBag - In the implementation block
@property (nonatomic,copy) NSNumber * DSID;                                       //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;                       //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * delegatedDSID;                              //@synthesize delegatedDSID=_delegatedDSID - In the implementation block
@property (nonatomic,copy) NSString * delegatedStorefrontIdentifier;              //@synthesize delegatedStorefrontIdentifier=_delegatedStorefrontIdentifier - In the implementation block
@property (nonatomic,copy) ICDelegateToken * delegateToken;                       //@synthesize delegateToken=_delegateToken - In the implementation block
@property (nonatomic,retain) ICURLBag * delegatedURLBag;                          //@synthesize delegatedURLBag=_delegatedURLBag - In the implementation block
-(NSNumber *)DSID;
-(ICURLBag *)delegatedURLBag;
-(NSString *)storefrontIdentifier;
-(ICDelegateToken *)delegateToken;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setDelegatedURLBag:(ICURLBag *)arg1 ;
-(void)setURLBag:(ICURLBag *)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(void)setDelegateToken:(ICDelegateToken *)arg1 ;
-(NSString *)delegatedStorefrontIdentifier;
-(void)setICloudPersonID:(NSString *)arg1 ;
-(void)setDelegatedDSID:(NSNumber *)arg1 ;
-(NSString *)iCloudPersonID;
-(ICURLBag *)URLBag;
-(NSNumber *)delegatedDSID;
-(void)setDelegatedStorefrontIdentifier:(NSString *)arg1 ;
@end

