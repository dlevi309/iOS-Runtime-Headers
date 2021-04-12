/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/


@class CRSCardRequest;

@interface CRKCardPresentationConfiguration : NSObject {

	BOOL _respectsUserConsent;
	BOOL _loadsBundleProviders;
	CRSCardRequest* _cardRequest;

}

@property (nonatomic,readonly) CRSCardRequest * cardRequest;              //@synthesize cardRequest=_cardRequest - In the implementation block
@property (nonatomic,readonly) id<CRContent> content; 
@property (assign,nonatomic) BOOL respectsUserConsent;                    //@synthesize respectsUserConsent=_respectsUserConsent - In the implementation block
@property (assign,nonatomic) BOOL loadsBundleProviders;                   //@synthesize loadsBundleProviders=_loadsBundleProviders - In the implementation block
-(id<CRContent>)content;
-(id)initWithCard:(id)arg1 ;
-(id)initWithContent:(id)arg1 ;
-(void)setLoadsBundleProviders:(BOOL)arg1 ;
-(CRSCardRequest *)cardRequest;
-(void)setRespectsUserConsent:(BOOL)arg1 ;
-(id)initWithCardRequest:(id)arg1 ;
-(BOOL)loadsBundleProviders;
-(BOOL)respectsUserConsent;
@end

