/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedTileInfo.h>

@class NSString, NSArray, NFLHeadlineTileInfo;

@interface NFLAdTileInfo : NSObject <NFLFeedTileInfo> {

	BOOL _isDisplayingAd;
	BOOL _isOnScreen;
	BOOL _appearedOnScreen;
	BOOL _appearedWithAd;
	NSString* _groupIdentifier;
	long long _adType;
	NSString* _adUnitIdentifier;

}

@property (nonatomic,retain) NSString * adUnitIdentifier;                                     //@synthesize adUnitIdentifier=_adUnitIdentifier - In the implementation block
@property (assign,nonatomic) long long adType;                                                //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingAd;                                             //@synthesize isDisplayingAd=_isDisplayingAd - In the implementation block
@property (assign,nonatomic) BOOL isOnScreen;                                                 //@synthesize isOnScreen=_isOnScreen - In the implementation block
@property (assign,nonatomic) BOOL appearedOnScreen;                                           //@synthesize appearedOnScreen=_appearedOnScreen - In the implementation block
@property (assign,nonatomic) BOOL appearedWithAd;                                             //@synthesize appearedWithAd=_appearedWithAd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(id)identifierPrefix;
+(id)identifierForAdType:(long long)arg1 ;
+(long long)adTypeForIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)groupIdentifier;
-(void)commonInit;
-(BOOL)isSelectable;
-(BOOL)isOnScreen;
-(id)initWithAdType:(long long)arg1 ;
-(long long)adType;
-(void)setAdType:(long long)arg1 ;
-(unsigned long long)tileInfoType;
-(id)updatedTileInfoWithNewHeadline:(id)arg1 ;
-(BOOL)pageable;
-(unsigned long long)bookmarkOffsetType;
-(NSArray *)underlyingFeedElements;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;
-(BOOL)isDisplayingAd;
-(void)setIsDisplayingAd:(BOOL)arg1 ;
-(void)setIsOnScreen:(BOOL)arg1 ;
-(BOOL)appearedOnScreen;
-(void)setAppearedOnScreen:(BOOL)arg1 ;
-(BOOL)appearedWithAd;
-(void)setAppearedWithAd:(BOOL)arg1 ;
-(NSString *)adUnitIdentifier;
-(void)setAdUnitIdentifier:(NSString *)arg1 ;
@end

