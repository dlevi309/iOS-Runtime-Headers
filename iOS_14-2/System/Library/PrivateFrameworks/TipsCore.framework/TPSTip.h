/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSDocument.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPSActionableContent, TPSWidgetContent, NSArray, TPSAssets;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding> {

	BOOL _siriSuggestion;
	long long _type;
	long long _subContentType;
	TPSActionableContent* _fullContent;
	TPSActionableContent* _miniContent;
	TPSWidgetContent* _widgetContent;
	NSArray* _collectionIdentifiers;

}

@property (assign,nonatomic) long long type;                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long subContentType;                                     //@synthesize subContentType=_subContentType - In the implementation block
@property (nonatomic,copy) TPSActionableContent * fullContent;                             //@synthesize fullContent=_fullContent - In the implementation block
@property (nonatomic,copy) TPSActionableContent * miniContent;                             //@synthesize miniContent=_miniContent - In the implementation block
@property (nonatomic,copy) TPSWidgetContent * widgetContent;                               //@synthesize widgetContent=_widgetContent - In the implementation block
@property (nonatomic,copy) NSArray * collectionIdentifiers;                                //@synthesize collectionIdentifiers=_collectionIdentifiers - In the implementation block
@property (getter=isTip,nonatomic,readonly) BOOL tip; 
@property (getter=isIntro,nonatomic,readonly) BOOL intro; 
@property (getter=isOutro,nonatomic,readonly) BOOL outro; 
@property (assign,getter=isSiriSuggestion,nonatomic) BOOL siriSuggestion;                  //@synthesize siriSuggestion=_siriSuggestion - In the implementation block
@property (getter=isWelcome,nonatomic,readonly) BOOL welcome; 
@property (getter=isHardwareWelcome,nonatomic,readonly) BOOL hardwareWelcome; 
@property (getter=isSoftwareWelcome,nonatomic,readonly) BOOL softwareWelcome; 
@property (nonatomic,copy,readonly) TPSAssets * fullContentAssets; 
+(BOOL)supportsSecureCoding;
+(void)getValuesFromOpenURLSchemeQueryItems:(id)arg1 tipIdentifier:(id*)arg2 collectionIdentifier:(id*)arg3 referrer:(id*)arg4 ;
+(id)classSet;
+(long long)contentTypeForDictionary:(id)arg1 ;
+(id)tipIdFromDictionary:(id)arg1 ;
+(id)URLSchemeWithTipIdentifier:(id)arg1 collectionIdentifier:(id)arg2 referrer:(id)arg3 ;
-(BOOL)isTip;
-(id)actions;
-(id)bodyText;
-(BOOL)hasImage;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isIntro;
-(id)debugDescription;
-(void)setType:(long long)arg1 ;
-(void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2 ;
-(id)shareText;
-(TPSActionableContent *)fullContent;
-(TPSAssets *)fullContentAssets;
-(id)bodyContent;
-(BOOL)containsLinks;
-(BOOL)textContainsHTML;
-(id)webURLPath;
-(TPSActionableContent *)miniContent;
-(BOOL)isSiriSuggestion;
-(void)setSiriSuggestion:(BOOL)arg1 ;
-(long long)subContentType;
-(void)setSubContentType:(long long)arg1 ;
-(void)setFullContent:(TPSActionableContent *)arg1 ;
-(void)setMiniContent:(TPSActionableContent *)arg1 ;
-(TPSWidgetContent *)widgetContent;
-(void)setWidgetContent:(TPSWidgetContent *)arg1 ;
-(void)setCollectionIdentifiers:(NSArray *)arg1 ;
-(BOOL)isHardwareWelcome;
-(BOOL)isSoftwareWelcome;
-(BOOL)isWelcome;
-(void)addCollectionIdentifier:(id)arg1 ;
-(BOOL)hasWidgetContent;
-(id)URLSchemeWithReferrer:(id)arg1 ;
-(BOOL)isOutro;
-(id)summary;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)shortTitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)collectionIdentifiers;
-(id)title;
-(BOOL)hasVideo;
@end

