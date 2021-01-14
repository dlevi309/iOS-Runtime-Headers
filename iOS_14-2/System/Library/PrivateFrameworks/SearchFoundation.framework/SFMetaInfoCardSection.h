/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFMetaInfoCardSection.h>
@class NSArray, NSString, SFColor, NSURL, SFImage, NSDictionary, NSData;


@protocol SFMetaInfoCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (assign,nonatomic) BOOL trending; 
@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,copy) NSURL * hostPageURL; 
@property (nonatomic,retain) SFImage * badge; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1;
-(NSURL *)contentURL;
-(int)separatorStyle;
-(void)setBadge:(id)arg1;
-(SFImage *)badge;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setTrending:(BOOL)arg1;
-(void)setHostPageURL:(id)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(NSData *)jsonData;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(NSURL *)hostPageURL;
-(SFColor *)backgroundColor;
-(void)setContentURL:(id)arg1;
-(NSString *)type;
-(BOOL)trending;
-(NSArray *)punchoutOptions;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, NSURL, SFImage, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFMetaInfoCardSection : SFCardSection <SFMetaInfoCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _trending;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSURL* _contentURL;
	NSURL* _hostPageURL;
	SFImage* _badge;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL trending;                                          //@synthesize trending=_trending - In the implementation block
@property (nonatomic,copy) NSURL * contentURL;                                       //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSURL * hostPageURL;                                      //@synthesize hostPageURL=_hostPageURL - In the implementation block
@property (nonatomic,retain) SFImage * badge;                                        //@synthesize badge=_badge - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSURL *)contentURL;
-(int)separatorStyle;
-(void)setBadge:(SFImage *)arg1 ;
-(SFImage *)badge;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(void)setTrending:(BOOL)arg1 ;
-(void)setHostPageURL:(NSURL *)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(NSURL *)hostPageURL;
-(SFColor *)backgroundColor;
-(BOOL)hasTrending;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)trending;
-(id)initWithProtobuf:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

