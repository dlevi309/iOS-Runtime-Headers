/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBSocialMediaPostCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, NSData;


@protocol _SFPBSocialMediaPostCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL nameNoWrap; 
@property (assign,nonatomic) int nameMaxLines; 
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,retain) _SFPBImage * verifiedGlyph; 
@property (nonatomic,retain) _SFPBImage * profilePicture; 
@property (nonatomic,retain) _SFPBRichText * post; 
@property (nonatomic,retain) _SFPBImage * picture; 
@property (nonatomic,copy) NSString * timestamp; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(NSString *)type;
-(void)setType:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)handle;
-(NSString *)timestamp;
-(void)setTimestamp:(id)arg1;
-(void)setHandle:(id)arg1;
-(_SFPBColor *)backgroundColor;
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
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setNameNoWrap:(BOOL)arg1;
-(void)setNameMaxLines:(int)arg1;
-(void)setVerifiedGlyph:(id)arg1;
-(void)setProfilePicture:(id)arg1;
-(void)setPost:(id)arg1;
-(void)setPicture:(id)arg1;
-(BOOL)nameNoWrap;
-(int)nameMaxLines;
-(_SFPBImage *)verifiedGlyph;
-(_SFPBImage *)profilePicture;
-(_SFPBRichText *)post;
-(_SFPBImage *)picture;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, NSData;

@interface _SFPBSocialMediaPostCardSection : PBCodable <_SFPBSocialMediaPostCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _nameNoWrap;
	int _separatorStyle;
	int _nameMaxLines;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _name;
	NSString* _handle;
	_SFPBImage* _verifiedGlyph;
	_SFPBImage* _profilePicture;
	_SFPBRichText* _post;
	_SFPBImage* _picture;
	NSString* _timestamp;
	NSString* _footnote;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL nameNoWrap;                                 //@synthesize nameNoWrap=_nameNoWrap - In the implementation block
@property (assign,nonatomic) int nameMaxLines;                                //@synthesize nameMaxLines=_nameMaxLines - In the implementation block
@property (nonatomic,copy) NSString * handle;                                 //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) _SFPBImage * verifiedGlyph;                      //@synthesize verifiedGlyph=_verifiedGlyph - In the implementation block
@property (nonatomic,retain) _SFPBImage * profilePicture;                     //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) _SFPBRichText * post;                            //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) _SFPBImage * picture;                            //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * footnote;                               //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)handle;
-(id)dictionaryRepresentation;
-(NSString *)timestamp;
-(void)setTimestamp:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSArray *)punchoutOptions;
-(id)initWithFacade:(id)arg1 ;
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
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setNameNoWrap:(BOOL)arg1 ;
-(void)setNameMaxLines:(int)arg1 ;
-(void)setVerifiedGlyph:(_SFPBImage *)arg1 ;
-(void)setProfilePicture:(_SFPBImage *)arg1 ;
-(void)setPost:(_SFPBRichText *)arg1 ;
-(void)setPicture:(_SFPBImage *)arg1 ;
-(BOOL)nameNoWrap;
-(int)nameMaxLines;
-(_SFPBImage *)verifiedGlyph;
-(_SFPBImage *)profilePicture;
-(_SFPBRichText *)post;
-(_SFPBImage *)picture;
@end

