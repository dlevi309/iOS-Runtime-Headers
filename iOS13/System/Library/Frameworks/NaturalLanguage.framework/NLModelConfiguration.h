/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	unsigned long long _revision;
	NSString* _language;
	NSDictionary* _options;

}

@property (readonly) long long type; 
@property (copy,readonly) NSString * language; 
@property (readonly) unsigned long long revision; 
+(BOOL)supportsSecureCoding;
+(id)defaultModelConfigurationForType:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)defaultModelConfigurationForType:(long long)arg1 ;
+(unsigned long long)currentRevisionForType:(long long)arg1 ;
+(id)supportedRevisionsForType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)options;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
-(unsigned long long)revision;
-(id)embeddingData;
-(id)initWithModelType:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)embeddingURL;
-(id)embeddingModel;
@end

