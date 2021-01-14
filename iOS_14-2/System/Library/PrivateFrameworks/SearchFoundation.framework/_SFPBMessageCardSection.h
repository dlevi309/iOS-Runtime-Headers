/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMessageCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBURL, _SFPBMessageAttachment, NSData;


@protocol _SFPBMessageCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSString * messageText; 
@property (assign,nonatomic) int messageStatus; 
@property (assign,nonatomic) int messageServiceType; 
@property (nonatomic,retain) _SFPBURL * audioMessageURL; 
@property (nonatomic,retain) _SFPBMessageAttachment * messageAttachment; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
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
-(void)setHasTopPadding:(BOOL)arg1;
-(NSData *)jsonData;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(int)messageStatus;
-(id)initWithDictionary:(id)arg1;
-(void)setMessageStatus:(int)arg1;
-(void)setMessageServiceType:(int)arg1;
-(void)setAudioMessageURL:(id)arg1;
-(void)setMessageAttachment:(id)arg1;
-(int)messageServiceType;
-(_SFPBURL *)audioMessageURL;
-(_SFPBMessageAttachment *)messageAttachment;
-(_SFPBColor *)backgroundColor;
-(NSString *)type;
-(NSArray *)punchoutOptions;
-(void)setMessageText:(id)arg1;
-(NSString *)messageText;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBURL, _SFPBMessageAttachment, NSData;

@interface _SFPBMessageCardSection : PBCodable <_SFPBMessageCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	int _messageStatus;
	int _messageServiceType;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _messageText;
	_SFPBURL* _audioMessageURL;
	_SFPBMessageAttachment* _messageAttachment;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                 //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                            //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                      //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                        //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                      //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                   //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                      //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * messageText;                                    //@synthesize messageText=_messageText - In the implementation block
@property (assign,nonatomic) int messageStatus;                                       //@synthesize messageStatus=_messageStatus - In the implementation block
@property (assign,nonatomic) int messageServiceType;                                  //@synthesize messageServiceType=_messageServiceType - In the implementation block
@property (nonatomic,retain) _SFPBURL * audioMessageURL;                              //@synthesize audioMessageURL=_audioMessageURL - In the implementation block
@property (nonatomic,retain) _SFPBMessageAttachment * messageAttachment;              //@synthesize messageAttachment=_messageAttachment - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(int)messageStatus;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMessageStatus:(int)arg1 ;
-(void)setMessageServiceType:(int)arg1 ;
-(void)setAudioMessageURL:(_SFPBURL *)arg1 ;
-(void)setMessageAttachment:(_SFPBMessageAttachment *)arg1 ;
-(int)messageServiceType;
-(_SFPBURL *)audioMessageURL;
-(_SFPBMessageAttachment *)messageAttachment;
-(_SFPBColor *)backgroundColor;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

