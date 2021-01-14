/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, REContent, NSArray, REElementAction;

@interface REElement : NSObject <REAutomaticExportedInterface, NSCopying, NSCoding> {

	NSString* _identifier;
	unsigned long long _privacyBehavior;
	REContent* _content;
	REContent* _idealizedContent;
	NSArray* _relevanceProviders;
	REElementAction* _action;
	NSString* _bundleIdentifier;

}

@property (retain) NSString * bundleIdentifier;                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long privacyBehavior;              //@synthesize privacyBehavior=_privacyBehavior - In the implementation block
@property (nonatomic,readonly) REContent * content;                             //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) REContent * idealizedContent;                    //@synthesize idealizedContent=_idealizedContent - In the implementation block
@property (nonatomic,readonly) NSArray * relevanceProviders;                    //@synthesize relevanceProviders=_relevanceProviders - In the implementation block
@property (nonatomic,readonly) REElementAction * action;                        //@synthesize action=_action - In the implementation block
+(id)_supportedDictionaryEncodingKeys;
-(REContent *)content;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(REElementAction *)action;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)relevanceProviders;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 ;
-(REContent *)idealizedContent;
-(id)shallowCopy;
-(void)_updateIdentifier:(id)arg1 ;
-(id)copyElementWithUpdatedRelevanceProviders:(id)arg1 ;
-(void)finalizeContent;
-(id)initWithDictionary:(id)arg1 relevanceProviderGenerator:(id)arg2 ;
-(id)dictionaryEncodingWithRelevanceProviderGenerator:(id)arg1 ;
-(unsigned long long)privacyBehavior;
-(id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 ;
-(id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5 privacyBehavior:(unsigned long long)arg6 ;
-(BOOL)_relevanceProvidersEqualToElement:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5 ;
-(BOOL)isNoContentElement;
@end

