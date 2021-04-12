/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBSplitImageView.h>
#import <UIKit/UIKBCacheableView.h>

@class UIKBTree, UITextInputTraits, NSObject, UIKBRenderConfig, NSString;

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {

	UIKBTree* _keyplane;
	UITextInputTraits* _inputTraits;
	int _visualStyle;
	NSObject* _geometryCacheKey;
	CGRect _splitLeftRect;
	CGRect _splitLeftCacheRect;
	CGRect _splitRightRect;
	CGRect _splitRightCacheRect;
	unsigned long long _topCorners;
	BOOL _isSplit;
	BOOL _centerFilled;
	BOOL _hasCandidateKeys;
	UIKBRenderConfig* _renderConfig;

}

@property (nonatomic,retain) NSObject * geometryCacheKey;                  //@synthesize geometryCacheKey=_geometryCacheKey - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@property (nonatomic,readonly) long long assetIdiom; 
@property (nonatomic,readonly) long long cacheDeferPriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)cacheDeferable;
-(BOOL)keepNonPersistent;
-(NSString *)cacheKey;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(double)cachedWidth;
-(long long)assetIdiom;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_canDrawContent;
-(UIKBRenderConfig *)renderConfig;
-(void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2 ;
-(void)displayLayer:(id)arg1 ;
-(NSObject *)geometryCacheKey;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setGeometryCacheKey:(NSObject *)arg1 ;
-(void)dealloc;
@end

