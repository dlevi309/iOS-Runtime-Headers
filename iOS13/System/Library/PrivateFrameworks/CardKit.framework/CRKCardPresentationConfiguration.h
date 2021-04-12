/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithContent:(id)arg1 ;
-(id)initWithCard:(id)arg1 ;
-(CRSCardRequest *)cardRequest;
-(id)initWithCardRequest:(id)arg1 ;
-(BOOL)loadsBundleProviders;
-(BOOL)respectsUserConsent;
-(void)setRespectsUserConsent:(BOOL)arg1 ;
-(void)setLoadsBundleProviders:(BOOL)arg1 ;
@end

