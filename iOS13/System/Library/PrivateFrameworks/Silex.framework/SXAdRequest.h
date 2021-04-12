/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSString, NSDictionary;

@interface SXAdRequest : NSObject {

	BOOL _dynamicPlacement;
	NSString* _componentIdentifier;
	NSDictionary* _componentMetadata;
	unsigned long long _adType;
	NSDictionary* _campaignData;
	double _aspectRatioOfVideoPlayer;
	CGPoint _positionInArticle;
	CGSize _viewportSize;
	CGSize _contentSize;

}

@property (nonatomic,retain) NSString * componentIdentifier;                //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * componentMetadata;              //@synthesize componentMetadata=_componentMetadata - In the implementation block
@property (assign,nonatomic) CGPoint positionInArticle;                     //@synthesize positionInArticle=_positionInArticle - In the implementation block
@property (assign,nonatomic) unsigned long long adType;                     //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) CGSize viewportSize;                           //@synthesize viewportSize=_viewportSize - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                            //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) NSDictionary * campaignData;                   //@synthesize campaignData=_campaignData - In the implementation block
@property (assign,nonatomic) BOOL dynamicPlacement;                         //@synthesize dynamicPlacement=_dynamicPlacement - In the implementation block
@property (assign,nonatomic) double aspectRatioOfVideoPlayer;               //@synthesize aspectRatioOfVideoPlayer=_aspectRatioOfVideoPlayer - In the implementation block
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(NSString *)componentIdentifier;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(unsigned long long)adType;
-(void)setAdType:(unsigned long long)arg1 ;
-(CGSize)viewportSize;
-(void)setViewportSize:(CGSize)arg1 ;
-(CGPoint)positionInArticle;
-(NSDictionary *)campaignData;
-(NSDictionary *)componentMetadata;
-(double)aspectRatioOfVideoPlayer;
-(void)setComponentMetadata:(NSDictionary *)arg1 ;
-(void)setCampaignData:(NSDictionary *)arg1 ;
-(void)setPositionInArticle:(CGPoint)arg1 ;
-(void)setDynamicPlacement:(BOOL)arg1 ;
-(void)setAspectRatioOfVideoPlayer:(double)arg1 ;
-(BOOL)dynamicPlacement;
@end

