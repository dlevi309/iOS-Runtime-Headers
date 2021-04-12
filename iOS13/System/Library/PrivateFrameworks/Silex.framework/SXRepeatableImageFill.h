/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFill.h>

@class NSString;

@interface SXRepeatableImageFill : SXFill

@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) SXConvertibleValue width; 
@property (nonatomic,readonly) SXConvertibleValue height; 
@property (nonatomic,readonly) unsigned long long repeat; 
-(unsigned long long)repeat;
-(SXConvertibleValue)height;
-(SXConvertibleValue)width;
-(NSString *)imageIdentifier;
-(unsigned long long)repeatWithValue:(id)arg1 withType:(int)arg2 ;
@end

