/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <libobjc.A.dylib/CNVCardLineSerialization.h>

@protocol CNVCardSerializationStorage;
@class NSString;

@interface CNVCardLineSerializationStrategyImpl : NSObject <CNVCardLineSerialization> {

	id<CNVCardSerializationStorage> _storage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializerWithStorage:(id)arg1 ;
-(void)serializeData:(id)arg1 ;
-(void)serializeString:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(unsigned long long)estimatedDataLength;
-(id)insertionMarker;
-(void)insertLine:(id)arg1 atMarker:(id)arg2 ;
-(BOOL)canSerializeString:(id)arg1 ;
-(BOOL)canSerializeArray:(id)arg1 ;
-(BOOL)canSerializeData:(id)arg1 ;
-(void)serializeLine:(id)arg1 ;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2 ;
-(void)serializeOpaqueValue:(id)arg1 ;
-(void)serializeVersionPlaceholder;
-(void)willSerializeValue;
-(void)serializeGroupingName:(id)arg1 ;
-(void)serializeName:(id)arg1 ;
-(void)serializeParameters:(id)arg1 ;
-(void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2 ;
@end

