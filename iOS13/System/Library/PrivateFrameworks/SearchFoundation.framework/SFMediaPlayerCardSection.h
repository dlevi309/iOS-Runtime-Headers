/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFMediaPlayerCardSection.h>
@class NSArray, NSString, SFColor, NSDictionary, NSData;


@protocol SFMediaPlayerCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSString *)subtitle;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(void)setSubtitle:(id)arg1;
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
-(NSArray *)mediaItems;
-(void)setMediaItems:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFMediaPlayerCardSection : SFCardSection <SFMediaPlayerCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	NSArray* _mediaItems;

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
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSArray * mediaItems;                                     //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
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
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
@end
