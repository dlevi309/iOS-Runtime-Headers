/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDSID:(NSNumber *)arg1 ;
-(NSNumber *)DSID;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(ICURLBag *)URLBag;
-(void)setURLBag:(ICURLBag *)arg1 ;
-(void)setICloudPersonID:(NSString *)arg1 ;
-(NSString *)iCloudPersonID;
-(ICDelegateToken *)delegateToken;
-(void)setDelegateToken:(ICDelegateToken *)arg1 ;
-(NSNumber *)delegatedDSID;
-(void)setDelegatedDSID:(NSNumber *)arg1 ;
-(NSString *)delegatedStorefrontIdentifier;
-(void)setDelegatedStorefrontIdentifier:(NSString *)arg1 ;
-(ICURLBag *)delegatedURLBag;
-(void)setDelegatedURLBag:(ICURLBag *)arg1 ;
@end

