/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPaymentHeroImageControllerDelegate;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKPaymentWebService, NSString, NSArray, PKPaymentHeroImageManifest;

@interface PKPaymentHeroImageController : NSObject {

	PKPaymentWebService* _webService;
	NSString* _primaryImageIdentifier;
	NSArray* _featuredImages;
	PKPaymentHeroImageManifest* _manifest;
	id<PKPaymentHeroImageControllerDelegate> _delegate;
	long long _watchSize;

}

@property (nonatomic,copy) NSString * primaryImageIdentifier;                                       //@synthesize primaryImageIdentifier=_primaryImageIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * featuredImages;                                                //@synthesize featuredImages=_featuredImages - In the implementation block
@property (nonatomic,readonly) PKPaymentHeroImageManifest * manifest;                               //@synthesize manifest=_manifest - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentHeroImageControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long watchSize;                                                   //@synthesize watchSize=_watchSize - In the implementation block
+(id)defaultImages;
+(CGSize)cardArtSizeForWatchViewSize:(CGSize)arg1 ;
+(double)cardAspectRatio;
-(id<PKPaymentHeroImageControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentHeroImageControllerDelegate>)arg1 ;
-(PKPaymentHeroImageManifest *)manifest;
-(long long)watchSize;
-(id)featuredImageIdentifiers;
-(id)initWithManifest:(id)arg1 webService:(id)arg2 ;
-(NSArray *)featuredImages;
-(NSString *)primaryImageIdentifier;
-(id)filterImages:(id)arg1 ;
-(void)downloadImages:(id)arg1 ;
-(id)featuredDefaultImages;
-(CGSize)cardArtSizeForSize:(CGSize)arg1 ;
-(void)setPrimaryImageIdentifier:(NSString *)arg1 ;
-(void)setFeaturedImages:(NSArray *)arg1 ;
-(void)setWatchSize:(long long)arg1 ;
@end

