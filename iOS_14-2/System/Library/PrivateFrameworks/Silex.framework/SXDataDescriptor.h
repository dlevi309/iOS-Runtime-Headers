/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

