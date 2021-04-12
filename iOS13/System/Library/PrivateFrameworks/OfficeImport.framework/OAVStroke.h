/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface OAVStroke : NSObject
+(void)initialize;
+(id)readFromManager:(id)arg1 ;
+(id)targetFgColorWithManager:(id)arg1 ;
+(void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(id)readLineEndWithType:(id)arg1 width:(id)arg2 length:(id)arg3 ;
+(unsigned char)readCapStyle:(id)arg1 ;
+(unsigned char)readCompoundType:(id)arg1 ;
+(unsigned char)readLineEndType:(id)arg1 ;
+(unsigned char)readLineEndWidth:(id)arg1 ;
+(unsigned char)readLineEndLength:(id)arg1 ;
+(char)readPresetDashStyle:(id)arg1 ;
@end

