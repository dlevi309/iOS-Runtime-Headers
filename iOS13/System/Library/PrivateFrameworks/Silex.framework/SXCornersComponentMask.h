/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentMask.h>

@class NSString;

@interface SXCornersComponentMask : SXComponentMask

@property (nonatomic,readonly) SXConvertibleValue radius; 
@property (nonatomic,readonly) BOOL topLeft; 
@property (nonatomic,readonly) BOOL topRight; 
@property (nonatomic,readonly) BOOL bottomRight; 
@property (nonatomic,readonly) BOOL bottomLeft; 
@property (nonatomic,readonly) unsigned long long cornerMask; 
@property (nonatomic,readonly) NSString * curve; 
-(NSString *)curve;
-(BOOL)bottomLeft;
-(BOOL)bottomRight;
-(BOOL)topRight;
-(BOOL)topLeft;
-(SXConvertibleValue)radius;
-(unsigned long long)cornerMask;
-(BOOL)cornerWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)topLeftWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)topRightWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)bottomRightWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)bottomLeftWithValue:(id)arg1 withType:(int)arg2 ;
-(id)curveWithValue:(id)arg1 withType:(int)arg2 ;
@end

