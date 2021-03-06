/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class NSString, NSDictionary, _LTTranslationRange;

@interface _WKTextManipulationToken : NSObject {

	RetainPtr<NSDictionary<NSString *,id> >* _userInfo;
	BOOL _excluded;
	NSString* _identifier;
	NSString* _content;

}

@property (nonatomic,copy,readonly) NSString * safari_debugDescription; 
@property (nonatomic,copy,readonly) NSString * safari_privacyPreservingDescription; 
@property (nonatomic,copy,readonly) NSDictionary * safari_privacyPreservingMetadata; 
@property (nonatomic,copy,readonly) NSDictionary * safari_dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * safari_jsonRepresentation; 
@property (nonatomic,readonly) _LTTranslationRange * safari_translationRangeRepresentation; 
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * content;                                                           //@synthesize content=_content - In the implementation block
@property (assign,getter=isExcluded,nonatomic) BOOL excluded;                                            //@synthesize excluded=_excluded - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * userInfo; 
+(id)safari_tokenWithTranslationAlignmentRepresentation:(id)arg1 ;
-(NSString *)safari_privacyPreservingDescription;
-(_LTTranslationRange *)safari_translationRangeRepresentation;
-(BOOL)safari_isEqualToManipulationToken:(id)arg1 includingContentEquality:(BOOL)arg2 ;
-(id)_safari_descriptionPreservingPrivacy:(BOOL)arg1 ;
-(NSString *)safari_debugDescription;
-(NSDictionary *)safari_dictionaryRepresentation;
-(NSString *)safari_jsonRepresentation;
-(NSDictionary *)safari_privacyPreservingMetadata;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)debugDescription;
-(id)description;
-(void)setExcluded:(BOOL)arg1 ;
-(BOOL)isExcluded;
-(id)_descriptionPreservingPrivacy:(BOOL)arg1 ;
-(BOOL)isEqualToTextManipulationToken:(id)arg1 includingContentEquality:(BOOL)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

