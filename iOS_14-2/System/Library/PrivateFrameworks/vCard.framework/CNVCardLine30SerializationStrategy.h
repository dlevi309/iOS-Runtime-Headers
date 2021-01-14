/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <vCard/CNVCardLineSerializationStrategyImpl.h>

@interface CNVCardLine30SerializationStrategy : CNVCardLineSerializationStrategyImpl {

	unsigned long long _startingLineLength;

}
-(void)serializeString:(id)arg1 ;
-(void)serializeData:(id)arg1 ;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2 ;
-(void)serializeVersionPlaceholder;
-(void)willSerializeValue;
-(void)serializeGroupingName:(id)arg1 ;
-(void)serializeParameters:(id)arg1 ;
-(void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2 ;
-(void)_addAutomagicParametersForData:(id)arg1 ;
-(id)detectedTypeOfData:(id)arg1 ;
@end

