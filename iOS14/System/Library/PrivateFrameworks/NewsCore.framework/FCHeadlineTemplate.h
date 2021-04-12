/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCTextInfo, FCColor, NSArray;

@interface FCHeadlineTemplate : NSObject <NSCopying> {

	FCTextInfo* _headlineTitleTextInfo;
	FCTextInfo* _headlineExcerptTextInfo;
	FCTextInfo* _headlineBylineTextInfo;
	FCColor* _backgroundColor;
	NSArray* _loadableFonts;

}

@property (nonatomic,copy) FCTextInfo * headlineTitleTextInfo;                //@synthesize headlineTitleTextInfo=_headlineTitleTextInfo - In the implementation block
@property (nonatomic,copy) FCTextInfo * headlineExcerptTextInfo;              //@synthesize headlineExcerptTextInfo=_headlineExcerptTextInfo - In the implementation block
@property (nonatomic,copy) FCTextInfo * headlineBylineTextInfo;               //@synthesize headlineBylineTextInfo=_headlineBylineTextInfo - In the implementation block
@property (nonatomic,copy) FCColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSArray * loadableFonts;                           //@synthesize loadableFonts=_loadableFonts - In the implementation block
+(id)_headlineTemplateWithJSON:(id)arg1 versionNumber:(id)arg2 ;
+(id)headlineTemplateWithJSON:(id)arg1 ;
+(id)_defaultTitleTextColor;
+(id)templateByMergingTemplate:(id)arg1 intoTemplate:(id)arg2 ;
+(id)_defaultBackgroundColor;
-(id)init;
-(FCTextInfo *)headlineExcerptTextInfo;
-(void)setBackgroundColor:(FCColor *)arg1 ;
-(FCColor *)backgroundColor;
-(NSArray *)loadableFonts;
-(void)setHeadlineTitleTextInfo:(FCTextInfo *)arg1 ;
-(void)setHeadlineExcerptTextInfo:(FCTextInfo *)arg1 ;
-(void)setHeadlineBylineTextInfo:(FCTextInfo *)arg1 ;
-(FCTextInfo *)headlineBylineTextInfo;
-(FCTextInfo *)headlineTitleTextInfo;
-(unsigned long long)hash;
-(void)mergeFromTemplate:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 versionNumber:(long long)arg2 ;
-(id)_allThemePropertyNames;
-(void)setLoadableFonts:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

