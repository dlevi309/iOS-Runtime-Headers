/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXFontAttributes.h>

@class NSString;

@interface SXJSONFontAttributes : SXJSONObject <SXFontAttributes>

@property (nonatomic,readonly) NSString * familyName; 
@property (nonatomic,readonly) long long weight; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) long long width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)width;
-(long long)style;
-(long long)weight;
-(NSString *)familyName;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)weightWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)widthWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)styleWithValue:(id)arg1 withType:(int)arg2 ;
@end

