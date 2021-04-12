/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI
*/


@protocol TPSConstellationContentParserDelegate, OS_dispatch_queue;
#import <TipsUI/TipsUI-Structs.h>
@class UITraitCollection, NSString, NSAttributedString, NSObject, NSMutableDictionary, UIFont, NSDictionary, NSURL;

@interface TPSConstellationContentParser : NSObject {

	BOOL _ignoreLinks;
	BOOL _delegateRespondsToBoldFont;
	BOOL _delegateRespondsToItalicFont;
	int _numberOfParagraphTags;
	id<TPSConstellationContentParserDelegate> _delegate;
	long long _numOfActiveRemoteURLSessions;
	UITraitCollection* _traitCollection;
	NSString* _identifier;
	NSAttributedString* _attributedString;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _assetsSessionItemMap;
	NSMutableDictionary* _assetsTextAttachmentMap;
	UIFont* _boldFont;
	UIFont* _italicFont;
	NSDictionary* _defaultAttributes;
	NSString* _language;
	NSURL* _assetsBaseURL;

}

@property (assign,nonatomic) BOOL delegateRespondsToBoldFont;                                        //@synthesize delegateRespondsToBoldFont=_delegateRespondsToBoldFont - In the implementation block
@property (assign,nonatomic) BOOL delegateRespondsToItalicFont;                                      //@synthesize delegateRespondsToItalicFont=_delegateRespondsToItalicFont - In the implementation block
@property (assign,nonatomic) int numberOfParagraphTags;                                              //@synthesize numberOfParagraphTags=_numberOfParagraphTags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                                 //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsSessionItemMap;                             //@synthesize assetsSessionItemMap=_assetsSessionItemMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsTextAttachmentMap;                          //@synthesize assetsTextAttachmentMap=_assetsTextAttachmentMap - In the implementation block
@property (nonatomic,retain) UIFont * boldFont;                                                      //@synthesize boldFont=_boldFont - In the implementation block
@property (nonatomic,retain) UIFont * italicFont;                                                    //@synthesize italicFont=_italicFont - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultAttributes;                                       //@synthesize defaultAttributes=_defaultAttributes - In the implementation block
@property (nonatomic,retain) NSString * language;                                                    //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSURL * assetsBaseURL;                                                  //@synthesize assetsBaseURL=_assetsBaseURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;                                    //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic,__weak) id<TPSConstellationContentParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long numOfActiveRemoteURLSessions;                                 //@synthesize numOfActiveRemoteURLSessions=_numOfActiveRemoteURLSessions - In the implementation block
@property (assign,nonatomic) BOOL ignoreLinks;                                                       //@synthesize ignoreLinks=_ignoreLinks - In the implementation block
@property (nonatomic,copy) UITraitCollection * traitCollection;                                      //@synthesize traitCollection=_traitCollection - In the implementation block
+(id)inlineIconPlaceHolderImage;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)init;
-(id<TPSConstellationContentParserDelegate>)delegate;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setDelegate:(id<TPSConstellationContentParserDelegate>)arg1 ;
-(NSDictionary *)defaultAttributes;
-(id)attributedStringForContent:(id)arg1 error:(id*)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(UIFont *)boldFont;
-(NSString *)language;
-(void)dealloc;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
-(void)setBoldFont:(UIFont *)arg1 ;
-(BOOL)ignoreLinks;
-(void)setIgnoreLinks:(BOOL)arg1 ;
-(id)attributedStringForConstellationContent:(id)arg1 defaultAttributes:(id)arg2 identifier:(id)arg3 language:(id)arg4 assetsBaseURL:(id)arg5 error:(id*)arg6 ;
-(NSMutableDictionary *)assetsSessionItemMap;
-(NSMutableDictionary *)assetsTextAttachmentMap;
-(void)setDelegateRespondsToBoldFont:(BOOL)arg1 ;
-(void)setDelegateRespondsToItalicFont:(BOOL)arg1 ;
-(BOOL)delegateRespondsToBoldFont;
-(BOOL)delegateRespondsToItalicFont;
-(void)setNumberOfParagraphTags:(int)arg1 ;
-(void)setAssetsBaseURL:(NSURL *)arg1 ;
-(int)numberOfParagraphTags;
-(id)attributedStringForTextNode:(id)arg1 ;
-(id)attributedStringForParagraphNode:(id)arg1 error:(id*)arg2 ;
-(id)attributedStringForSymbolNode:(id)arg1 ;
-(id)attributedStringForInlineIconNode:(id)arg1 ;
-(id)attributedStringForPersonalizedTextNode:(id)arg1 error:(id*)arg2 ;
-(UIFont *)italicFont;
-(id)attributesWithMarks:(id)arg1 ;
-(id)_colorForSystemColorString:(id)arg1 ;
-(NSURL *)assetsBaseURL;
-(CGSize)assetSizeFromAttributes:(id)arg1 ;
-(void)fetchAssetConfiguration:(id)arg1 cacheIdentifier:(id)arg2 textAttachment:(id)arg3 ;
-(CGRect)boundsForImage:(id)arg1 size:(CGSize)arg2 ;
-(double)scaledValueForSize:(double)arg1 ;
-(long long)numOfActiveRemoteURLSessions;
-(void)setNumOfActiveRemoteURLSessions:(long long)arg1 ;
-(void)setAssetsSessionItemMap:(NSMutableDictionary *)arg1 ;
-(void)setAssetsTextAttachmentMap:(NSMutableDictionary *)arg1 ;
-(void)setItalicFont:(UIFont *)arg1 ;
@end
