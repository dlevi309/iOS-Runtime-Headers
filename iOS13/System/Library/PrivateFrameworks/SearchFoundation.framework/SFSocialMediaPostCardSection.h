/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFSocialMediaPostCardSection.h>
@class NSArray, NSString, SFColor, NSNumber, SFImage, SFRichText, NSDictionary, NSData;


@protocol SFSocialMediaPostCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL nameNoWrap; 
@property (nonatomic,copy) NSNumber * nameMaxLines; 
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,retain) SFImage * verifiedGlyph; 
@property (nonatomic,retain) SFImage * profilePicture; 
@property (nonatomic,retain) SFRichText * post; 
@property (nonatomic,retain) SFImage * picture; 
@property (nonatomic,copy) NSString * timestamp; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(NSString *)type;
-(void)setType:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)handle;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)timestamp;
-(void)setTimestamp:(id)arg1;
-(void)setHandle:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(NSArray *)punchoutOptions;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(NSString *)footnote;
-(void)setFootnote:(id)arg1;
-(void)setNameNoWrap:(BOOL)arg1;
-(void)setNameMaxLines:(id)arg1;
-(void)setVerifiedGlyph:(id)arg1;
-(void)setProfilePicture:(id)arg1;
-(void)setPost:(id)arg1;
-(void)setPicture:(id)arg1;
-(BOOL)nameNoWrap;
-(NSNumber *)nameMaxLines;
-(SFImage *)verifiedGlyph;
-(SFImage *)profilePicture;
-(SFRichText *)post;
-(SFImage *)picture;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, NSNumber, SFImage, SFRichText, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFSocialMediaPostCardSection : SFCardSection <SFSocialMediaPostCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _nameNoWrap;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _name;
	NSNumber* _nameMaxLines;
	NSString* _handle;
	SFImage* _verifiedGlyph;
	SFImage* _profilePicture;
	SFRichText* _post;
	SFImage* _picture;
	NSString* _timestamp;
	NSString* _footnote;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL nameNoWrap;                                        //@synthesize nameNoWrap=_nameNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * nameMaxLines;                                  //@synthesize nameMaxLines=_nameMaxLines - In the implementation block
@property (nonatomic,copy) NSString * handle;                                        //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) SFImage * verifiedGlyph;                                //@synthesize verifiedGlyph=_verifiedGlyph - In the implementation block
@property (nonatomic,retain) SFImage * profilePicture;                               //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) SFRichText * post;                                      //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) SFImage * picture;                                      //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                      //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)handle;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)timestamp;
-(void)setTimestamp:(NSString *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSArray *)punchoutOptions;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setNameNoWrap:(BOOL)arg1 ;
-(void)setNameMaxLines:(NSNumber *)arg1 ;
-(void)setVerifiedGlyph:(SFImage *)arg1 ;
-(void)setProfilePicture:(SFImage *)arg1 ;
-(void)setPost:(SFRichText *)arg1 ;
-(void)setPicture:(SFImage *)arg1 ;
-(BOOL)nameNoWrap;
-(NSNumber *)nameMaxLines;
-(SFImage *)verifiedGlyph;
-(SFImage *)profilePicture;
-(SFRichText *)post;
-(SFImage *)picture;
-(BOOL)hasNameNoWrap;
@end

