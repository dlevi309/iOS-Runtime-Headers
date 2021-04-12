/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <vCard/CNVCardLineSerializationStrategyImpl.h>

@class NSArray;

@interface CNVCardLine21SerializationStrategy : CNVCardLineSerializationStrategyImpl {

	NSArray* _encodings;

}
+(id)serializerWithStorage:(id)arg1 encodings:(id)arg2 ;
-(void)serializeData:(id)arg1 ;
-(void)serializeString:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2 ;
-(void)serializeVersionPlaceholder;
-(void)serializeParameters:(id)arg1 ;
-(void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2 ;
-(void)_addAutomagicParametersForData:(id)arg1 ;
-(id)detectedTypeOfData:(id)arg1 ;
-(id)initWithStorage:(id)arg1 encodings:(id)arg2 ;
-(id)necessaryEncodingForValue:(id)arg1 ;
@end

