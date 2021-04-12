/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class NSArray, NSString;

@interface SGTaggedCharacterRange : NSObject {

	unsigned long long _annotationType;
	NSArray* _tags;
	NSString* _text;
	NSRange _range;

}

@property (nonatomic,readonly) unsigned long long annotationType;              //@synthesize annotationType=_annotationType - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) NSRange range;                                  //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * text;                                //@synthesize text=_text - In the implementation block
+(id)describeAnnotationType:(unsigned long long)arg1 ;
+(id)annotationTypeUniqueIdentifier:(unsigned long long)arg1 ;
+(unsigned long long)annotationTypeFromString:(id)arg1 ;
+(id)enrichAndFilterTaggedCharacterRanges:(id)arg1 usingMapping:(id)arg2 withAnnotationType:(unsigned long long)arg3 ;
+(id)mergeTagsFromTaggedCharacterRanges:(id)arg1 withTaggedCharacterRanges:(id)arg2 ;
+(id)mergeTaggedCharacterRanges:(id)arg1 usingBaseTaggedCharacterRanges:(id)arg2 extraTags:(id)arg3 tagOverrides:(id)arg4 alignWithGroundTruth:(id)arg5 ;
+(id)flattenTaggedCharacterRanges:(id)arg1 usingWhitelist:(id)arg2 replaceOOVWithToken:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)tags;
-(NSRange)range;
-(NSString *)text;
-(id)initWithDict:(id)arg1 ;
-(id)dictRepresentation;
-(unsigned long long)annotationType;
-(id)initWithAnnotationType:(unsigned long long)arg1 tags:(id)arg2 range:(NSRange)arg3 text:(id)arg4 ;
-(BOOL)isEqualToTaggedCharacterRange:(id)arg1 ;
-(id)annotationTypeUniqueIdentifier;
@end

