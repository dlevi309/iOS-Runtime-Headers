/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@protocol CNVCardLineSerialization <NSObject>
@required
-(void)serializeString:(id)arg1;
-(void)serializeData:(id)arg1;
-(unsigned long long)estimatedDataLength;
-(id)insertionMarker;
-(void)insertLine:(id)arg1 atMarker:(id)arg2;
-(BOOL)canSerializeString:(id)arg1;
-(BOOL)canSerializeArray:(id)arg1;
-(BOOL)canSerializeData:(id)arg1;
-(void)serializeLine:(id)arg1;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
-(void)serializeOpaqueValue:(id)arg1;
-(void)serializeVersionPlaceholder;

@end

