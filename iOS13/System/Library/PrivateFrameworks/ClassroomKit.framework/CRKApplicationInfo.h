/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleIdentifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)shortVersionString;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 shortVersionString:(id)arg2 ;
@end

