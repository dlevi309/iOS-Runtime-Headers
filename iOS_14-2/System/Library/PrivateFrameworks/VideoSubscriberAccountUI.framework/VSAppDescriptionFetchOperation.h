/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(CGSize)preferredArtworkSize;
-(void)setPreferredArtworkSize:(CGSize)arg1 ;
-(NSOperationQueue *)imageLoadingQueue;
-(void)setImageLoadingQueue:(NSOperationQueue *)arg1 ;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)cancel;
-(NSSet *)appAdamIDs;
-(void)setAppAdamIDs:(NSSet *)arg1 ;
-(id)initWithAppAdamIDs:(id)arg1 ;
-(void)setShouldPrecomposeIcon:(BOOL)arg1 ;
-(void)setShouldPersonalizeResponse:(BOOL)arg1 ;
-(id)initWithAppAdamIDs:(id)arg1 preferredArtworkSize:(CGSize)arg2 ;
-(id)_appDescriptionFromLookupResponse:(id)arg1 appAdamID:(id)arg2 ;
-(BOOL)shouldPrecomposeIcon;
-(BOOL)needsProductProfile;
-(BOOL)shouldPersonalizeResponse;
-(void)_handleLookupResponse:(id)arg1 ;
-(void)setLookupRequest:(SSLookupRequest *)arg1 ;
-(SSLookupRequest *)lookupRequest;
-(void)setNeedsProductProfile:(BOOL)arg1 ;
@end

