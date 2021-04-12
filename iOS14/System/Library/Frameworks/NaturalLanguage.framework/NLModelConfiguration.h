/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)options;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)revision;
-(id)embeddingData;
-(id)initWithModelType:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)embeddingURL;
-(id)embeddingModel;
@end

