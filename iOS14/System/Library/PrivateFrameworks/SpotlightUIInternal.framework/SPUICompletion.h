/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/


#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
@class NSAttributedString, NSString, SFImage, SFSearchResult, SFCardSection;

@interface SPUICompletion : NSObject {

	BOOL _completionResultIsPotentiallyPunchout;
	NSAttributedString* _completionString;
	NSString* _extensionString;
	NSString* _bridgeString;
	SFImage* _image;
	NSString* _copyableString;
	NSString* _typedString;
	SFSearchResult* _result;
	SFCardSection* _cardSection;

}

@property (nonatomic,readonly) NSString * typedString;                                  //@synthesize typedString=_typedString - In the implementation block
@property (nonatomic,readonly) SFSearchResult * result;                                 //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) SFCardSection * cardSection;                             //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,retain) NSAttributedString * completionString;                     //@synthesize completionString=_completionString - In the implementation block
@property (nonatomic,retain) NSString * extensionString;                                //@synthesize extensionString=_extensionString - In the implementation block
@property (nonatomic,retain) SFImage * image;                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * bridgeString;                                   //@synthesize bridgeString=_bridgeString - In the implementation block
@property (nonatomic,readonly) NSString * copyableString;                               //@synthesize copyableString=_copyableString - In the implementation block
@property (nonatomic,readonly) BOOL completionResultIsPotentiallyPunchout;              //@synthesize completionResultIsPotentiallyPunchout=_completionResultIsPotentiallyPunchout - In the implementation block
+(BOOL)supportsResult:(id)arg1 cardSection:(id)arg2 ;
+(id)initWithTypedString:(id)arg1 result:(id)arg2 cardSection:(id)arg3 ;
+(BOOL)stringMatchesWritingDirection:(id)arg1 ;
+(id)localizedNameForBundleIdentifier:(id)arg1 ;
+(id)openString;
-(NSString *)copyableString;
-(void)setImage:(SFImage *)arg1 ;
-(BOOL)completionResultIsPotentiallyPunchout;
-(void)updateFields;
-(NSAttributedString *)completionString;
-(SFImage *)image;
-(id)description;
-(SFSearchResult *)result;
-(SFCardSection *)cardSection;
-(void)setCompletionString:(NSAttributedString *)arg1 ;
-(id)prefixMatchExtensionString;
-(void)setExtensionString:(NSString *)arg1 ;
-(void)setBridgeString:(NSString *)arg1 ;
-(id)initWithTypedString:(id)arg1 result:(id)arg2 cardSection:(id)arg3 ;
-(id)completionStringToMatch;
-(id)completionStringWithString:(id)arg1 ;
-(id)nonPrefixMatchExtensionString;
-(NSString *)typedString;
-(NSRange)rangeOfStringWithTypedString:(id)arg1 ;
-(NSString *)extensionString;
-(NSString *)bridgeString;
@end

