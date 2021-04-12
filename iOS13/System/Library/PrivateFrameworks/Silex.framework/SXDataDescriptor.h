/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXFormattedText, SXDataFormat;

@interface SXDataDescriptor : SXJSONObject

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) SXFormattedText * label; 
@property (nonatomic,readonly) unsigned long long dataType; 
@property (nonatomic,readonly) SXDataFormat * format; 
-(SXDataFormat *)format;
-(unsigned long long)dataType;
-(SXFormattedText *)label;
-(NSString *)key;
-(NSString *)identifier;
-(id)description;
-(id)formatWithValue:(id)arg1 withType:(int)arg2 ;
-(id)labelWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)dataTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

