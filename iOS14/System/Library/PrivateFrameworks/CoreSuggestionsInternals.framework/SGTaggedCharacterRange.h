/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface SGTaggedCharacterRange : NSObject <NSSecureCoding> {

	unsigned long long _annotationType;
	NSArray* _tags;
	NSString* _text;
	NSRange _range;

}

@property (nonatomic,readonly) unsigned long long annotationType;              //@synthesize annotationType=_annotationType - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) NSRange range;                                  //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * text;                                //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)describeAnnotationType:(unsigned long long)arg1 ;
+(id)annotationTypeUniqueIdentifier:(unsigned long long)arg1 ;
+(unsigned long long)annotationTypeFromString:(id)arg1 ;
+(id)enrichAndFilterTaggedCharacterRanges:(id)arg1 usingMapping:(id)arg2 withAnnotationType:(unsigned long long)arg3 ;
+(id)mergeTagsFromTaggedCharacterRanges:(id)arg1 withTaggedCharacterRanges:(id)arg2 ;
+(id)mergeTaggedCharacterRanges:(id)arg1 usingBaseTaggedCharacterRanges:(id)arg2 extraTags:(id)arg3 tagOverrides:(id)arg4 alignWithGroundTruth:(id)arg5 ;
+(id)biosBasedAnnotation:(id)arg1 usingTags:(id)arg2 forSection:(id)arg3 ;
+(id)state:(id)arg1 index:(int)arg2 section:(id)arg3 ;
+(id)flattenTaggedCharacterRanges:(id)arg1 usingWhitelist:(id)arg2 replaceOOVWithToken:(id)arg3 ;
-(NSArray *)tags;
-(id)init;
-(NSRange)range;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictRepresentation;
-(id)description;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)annotationType;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDict:(id)arg1 ;
-(id)initWithAnnotationType:(unsigned long long)arg1 tags:(id)arg2 range:(NSRange)arg3 text:(id)arg4 ;
-(BOOL)isEqualToTaggedCharacterRange:(id)arg1 ;
-(id)annotationTypeUniqueIdentifier;
@end

