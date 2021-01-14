/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class NSString;

@interface PXExploreLayoutMetrics : PXLayoutMetrics <PXGDiagnosticsProvider> {

	BOOL _allowHeaders;
	BOOL _allowSpecialPanoHeaders;
	long long _layoutType;
	long long _layoutSubtype;
	double _interitemSpacing;
	long long _largeHeroDensity;
	/*^block*/id _acceptableLargeHeroPredicate;
	UIEdgeInsets _safeAreaInsets;

}

@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                          //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (assign,nonatomic) long long layoutType;                                 //@synthesize layoutType=_layoutType - In the implementation block
@property (assign,nonatomic) long long layoutSubtype;                              //@synthesize layoutSubtype=_layoutSubtype - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) long long largeHeroDensity;                           //@synthesize largeHeroDensity=_largeHeroDensity - In the implementation block
@property (nonatomic,copy) id acceptableLargeHeroPredicate;                        //@synthesize acceptableLargeHeroPredicate=_acceptableLargeHeroPredicate - In the implementation block
@property (assign,nonatomic) BOOL allowHeaders;                                    //@synthesize allowHeaders=_allowHeaders - In the implementation block
@property (assign,nonatomic) BOOL allowSpecialPanoHeaders;                         //@synthesize allowSpecialPanoHeaders=_allowSpecialPanoHeaders - In the implementation block
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(BOOL)allowSpecialPanoHeaders;
-(void)setLargeHeroDensity:(long long)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(id)acceptableLargeHeroPredicate;
-(id)initWithSpec:(id)arg1 ;
-(long long)largeHeroDensity;
-(long long)layoutType;
-(void)setAllowSpecialPanoHeaders:(BOOL)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 ;
-(id)init;
-(double)interitemSpacing;
-(long long)layoutSubtype;
-(BOOL)allowHeaders;
-(void)setAllowHeaders:(BOOL)arg1 ;
-(void)setAcceptableLargeHeroPredicate:(id)arg1 ;
-(NSString *)diagnosticDescription;
-(void)setLayoutType:(long long)arg1 ;
-(void)setLayoutSubtype:(long long)arg1 ;
-(id)initWithUserInterfaceIdiom:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 referenceSize:(CGSize)arg4 safeAreaInsets:(UIEdgeInsets)arg5 ;
-(void)setInteritemSpacing:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

