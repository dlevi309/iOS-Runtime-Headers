/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXFontAttributes.h>

@class NSString;

@interface SXJSONFontAttributes : SXJSONObject <SXFontAttributes>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * familyName; 
@property (nonatomic,readonly) long long weight; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) long long width; 
-(long long)width;
-(long long)style;
-(long long)weight;
-(NSString *)familyName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)weightWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)widthWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)styleWithValue:(id)arg1 withType:(int)arg2 ;
@end

