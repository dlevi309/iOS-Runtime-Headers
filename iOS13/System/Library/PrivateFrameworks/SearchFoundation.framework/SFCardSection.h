/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFJSONSerializable.h>
#import <libobjc.A.dylib/SFCardSection.h>
@class NSArray, NSString, SFCard, SFColor, SFUserReportRequest;


@protocol SFCardSection <NSSecureCoding,NSObject>
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
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(NSArray *)punchoutOptions;
-(NSArray *)commands;
-(void)setCommands:(id)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)hideDivider;
-(void)setHideDivider:(BOOL)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(SFCard *)nextCard;
-(void)setNextCard:(id)arg1;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(id)arg1;
-(NSString *)cardSectionId;
-(void)setCardSectionId:(id)arg1;
-(NSString *)resultIdentifier;
-(void)setResultIdentifier:(id)arg1;
-(SFUserReportRequest *)userReportRequest;
-(void)setUserReportRequest:(id)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary, NSArray, NSString, SFCard, SFColor, SFUserReportRequest;

@interface SFCardSection : NSObject <SFJSONSerializable, SFCardSection, NSCopying> {

	BOOL _hasBottomPadding;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hideDivider;
	int _separatorStyle;
	NSString* _type;
	SFCard* _nextCard;
	NSArray* _commands;
	NSString* _punchoutPickerTitle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerDismissText;
	NSArray* _parameterKeyPaths;
	NSString* _cardSectionId;
	SFColor* _backgroundColor;
	NSString* _resultIdentifier;
	SFUserReportRequest* _userReportRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL hideDivider;                                       //@synthesize hideDivider=_hideDivider - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFCard * nextCard;                                      //@synthesize nextCard=_nextCard - In the implementation block
@property (nonatomic,copy) NSArray * commands;                                       //@synthesize commands=_commands - In the implementation block
@property (nonatomic,copy) NSArray * parameterKeyPaths;                              //@synthesize parameterKeyPaths=_parameterKeyPaths - In the implementation block
@property (nonatomic,copy) NSString * cardSectionId;                                 //@synthesize cardSectionId=_cardSectionId - In the implementation block
@property (nonatomic,copy) NSString * resultIdentifier;                              //@synthesize resultIdentifier=_resultIdentifier - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFUserReportRequest * userReportRequest;                //@synthesize userReportRequest=_userReportRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSArray *)punchoutOptions;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)hideDivider;
-(void)setHideDivider:(BOOL)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(SFCard *)nextCard;
-(void)setNextCard:(SFCard *)arg1 ;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(NSArray *)arg1 ;
-(NSString *)cardSectionId;
-(void)setCardSectionId:(NSString *)arg1 ;
-(NSString *)resultIdentifier;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(SFUserReportRequest *)userReportRequest;
-(void)setUserReportRequest:(SFUserReportRequest *)arg1 ;
@end

