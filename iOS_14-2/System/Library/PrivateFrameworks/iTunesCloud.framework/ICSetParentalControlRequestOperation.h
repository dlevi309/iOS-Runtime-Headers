/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest;

@interface ICSetParentalControlRequestOperation : ICRequestOperation {

	BOOL _allowsExplicitContent;
	BOOL _automatic;
	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;

}

@property (assign,nonatomic) BOOL allowsExplicitContent;                          //@synthesize allowsExplicitContent=_allowsExplicitContent - In the implementation block
@property (assign,getter=isAutomatic,nonatomic) BOOL automatic;                   //@synthesize automatic=_automatic - In the implementation block
@property (nonatomic,retain) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,retain) ICStoreURLRequest * storeURLRequest;                 //@synthesize storeURLRequest=_storeURLRequest - In the implementation block
-(void)execute;
-(BOOL)allowsExplicitContent;
-(BOOL)isAutomatic;
-(ICStoreRequestContext *)requestContext;
-(void)setAllowsExplicitContent:(BOOL)arg1 ;
-(void)_getURLFromBagAndSendRequest;
-(void)_buildAndSendRequestForURL:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 allowsExplicitContent:(BOOL)arg2 isAutomatic:(BOOL)arg3 ;
-(void)setAutomatic:(BOOL)arg1 ;
-(ICStoreURLRequest *)storeURLRequest;
-(void)setStoreURLRequest:(ICStoreURLRequest *)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)cancel;
@end

