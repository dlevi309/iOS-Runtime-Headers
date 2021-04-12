/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface REPredictionElement : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _privacyBehavior;
	NSArray* _relevanceProviders;
	NSString* _bundleIdentifier;
	NSString* _interaction;
	NSString* _section;

}

@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long privacyBehavior;              //@synthesize privacyBehavior=_privacyBehavior - In the implementation block
@property (nonatomic,readonly) NSArray * relevanceProviders;                    //@synthesize relevanceProviders=_relevanceProviders - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * interaction;                          //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,retain) NSString * section;                                //@synthesize section=_section - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionElementFromElement:(id)arg1 ;
+(id)predictionElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)setSection:(NSString *)arg1 ;
-(NSString *)section;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)interaction;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)relevanceProviders;
-(NSString *)identifier;
-(unsigned long long)privacyBehavior;
@end

