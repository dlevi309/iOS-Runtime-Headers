/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, NSDictionary;

@interface CRKApplicationInfo : NSObject {

	NSString* _bundleIdentifier;
	NSString* _shortVersionString;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortVersionString;                        //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(id)bundleIdentifiersFromDictionaryRepresentations:(id)arg1 ;
+(id)bundleIdentifierFromDictionaryRepresentation:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(NSString *)shortVersionString;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 shortVersionString:(id)arg2 ;
@end

