/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSDocument.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPSContent, TPSTileContent, NSArray, NSString, TPSAssets;

@interface TPSCollection : TPSDocument <NSCopying, NSSecureCoding> {

	BOOL _topFeatured;
	BOOL _containsIntroTip;
	TPSContent* _featuredContent;
	TPSTileContent* _tileContent;
	NSArray* _tipIdentifiers;
	NSString* _shortTitle;
	NSString* _countText;

}

@property (nonatomic,copy) NSString * shortTitle;                                //@synthesize shortTitle=_shortTitle - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * countText;                                 //@synthesize countText=_countText - In the implementation block
@property (nonatomic,copy) TPSContent * featuredContent;                         //@synthesize featuredContent=_featuredContent - In the implementation block
@property (nonatomic,copy) TPSTileContent * tileContent;                         //@synthesize tileContent=_tileContent - In the implementation block
@property (assign,getter=isTopFeatured,nonatomic) BOOL topFeatured;              //@synthesize topFeatured=_topFeatured - In the implementation block
@property (assign,nonatomic) BOOL containsIntroTip;                              //@synthesize containsIntroTip=_containsIntroTip - In the implementation block
@property (nonatomic,copy) NSArray * tipIdentifiers;                             //@synthesize tipIdentifiers=_tipIdentifiers - In the implementation block
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,copy,readonly) NSString * featuredTitle; 
@property (nonatomic,copy,readonly) TPSAssets * featuredAssets; 
@property (nonatomic,copy,readonly) TPSAssets * tileAssets; 
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)tipIdentifiersForDictionary:(id)arg1 ;
+(id)collectionIdentifierForDictionary:(id)arg1 ;
+(id)na_identity;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)containsIntroTip;
-(void)setContainsIntroTip:(BOOL)arg1 ;
-(NSArray *)tipIdentifiers;
-(void)setTipIdentifiers:(NSArray *)arg1 ;
-(TPSContent *)featuredContent;
-(void)setFeaturedContent:(TPSContent *)arg1 ;
-(TPSTileContent *)tileContent;
-(void)setTileContent:(TPSTileContent *)arg1 ;
-(void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2 ;
-(TPSAssets *)tileAssets;
-(NSString *)countText;
-(NSString *)featuredTitle;
-(TPSAssets *)featuredAssets;
-(BOOL)isTopFeatured;
-(void)setTopFeatured:(BOOL)arg1 ;
-(void)setCountText:(NSString *)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)shortTitle;
-(long long)priority;
-(void)setShortTitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

