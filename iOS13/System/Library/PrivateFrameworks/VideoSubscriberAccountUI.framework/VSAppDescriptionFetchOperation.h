/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSSet, VSAuditToken, VSOptional, SSLookupRequest, NSOperationQueue;

@interface VSAppDescriptionFetchOperation : VSAsyncOperation {

	BOOL _needsProductProfile;
	BOOL _shouldPersonalizeResponse;
	BOOL _shouldPrecomposeIcon;
	NSSet* _appAdamIDs;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	SSLookupRequest* _lookupRequest;
	NSOperationQueue* _imageLoadingQueue;
	CGSize _preferredArtworkSize;

}

@property (nonatomic,copy) NSSet * appAdamIDs;                                  //@synthesize appAdamIDs=_appAdamIDs - In the implementation block
@property (assign,nonatomic) CGSize preferredArtworkSize;                       //@synthesize preferredArtworkSize=_preferredArtworkSize - In the implementation block
@property (nonatomic,retain) VSOptional * result;                               //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) SSLookupRequest * lookupRequest;                   //@synthesize lookupRequest=_lookupRequest - In the implementation block
@property (nonatomic,retain) NSOperationQueue * imageLoadingQueue;              //@synthesize imageLoadingQueue=_imageLoadingQueue - In the implementation block
@property (assign,nonatomic) BOOL needsProductProfile;                          //@synthesize needsProductProfile=_needsProductProfile - In the implementation block
@property (assign,nonatomic) BOOL shouldPersonalizeResponse;                    //@synthesize shouldPersonalizeResponse=_shouldPersonalizeResponse - In the implementation block
@property (assign,nonatomic) BOOL shouldPrecomposeIcon;                         //@synthesize shouldPrecomposeIcon=_shouldPrecomposeIcon - In the implementation block
@property (nonatomic,retain) VSAuditToken * auditToken;                         //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(void)cancel;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(CGSize)preferredArtworkSize;
-(void)setPreferredArtworkSize:(CGSize)arg1 ;
-(void)executionDidBegin;
-(NSSet *)appAdamIDs;
-(void)setAppAdamIDs:(NSSet *)arg1 ;
-(NSOperationQueue *)imageLoadingQueue;
-(void)setImageLoadingQueue:(NSOperationQueue *)arg1 ;
-(SSLookupRequest *)lookupRequest;
-(void)setLookupRequest:(SSLookupRequest *)arg1 ;
-(id)initWithAppAdamIDs:(id)arg1 ;
-(void)setShouldPrecomposeIcon:(BOOL)arg1 ;
-(void)setShouldPersonalizeResponse:(BOOL)arg1 ;
-(id)initWithAppAdamIDs:(id)arg1 preferredArtworkSize:(CGSize)arg2 ;
-(id)_appDescriptionFromLookupResponse:(id)arg1 appAdamID:(id)arg2 ;
-(BOOL)shouldPrecomposeIcon;
-(BOOL)needsProductProfile;
-(BOOL)shouldPersonalizeResponse;
-(void)_handleLookupResponse:(id)arg1 ;
-(void)setNeedsProductProfile:(BOOL)arg1 ;
@end

