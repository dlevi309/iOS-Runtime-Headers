/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)interaction;
-(NSArray *)relevanceProviders;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
-(unsigned long long)privacyBehavior;
@end

