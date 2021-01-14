/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponent.h>

@class NSString, SXJSONArray;

@interface SXMapComponent : SXComponent

@property (nonatomic,readonly) SCD_Struct_SX20 region; 
@property (nonatomic,readonly) unsigned long long defaultMapType; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) SXJSONArray * items; 
+(id)typeString;
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)items;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(unsigned long long)defaultMapType;
-(SCD_Struct_SX20)region;
-(unsigned long long)defaultMapTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

