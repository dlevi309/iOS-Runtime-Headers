/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@protocol CNVCardSerializationStorage <NSObject>
@required
-(void)appendString:(id)arg1;
-(void)appendFormat:(id)arg1;
-(void)appendData:(id)arg1;
-(unsigned long long)estimatedDataLength;
-(unsigned long long)currentLength;
-(id)insertionMarker;
-(void)insertString:(id)arg1 atMarker:(id)arg2;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;

@end

