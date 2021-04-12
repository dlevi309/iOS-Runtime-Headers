/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

@class NSDictionary;


@protocol MTTinting <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * tintColorDescription; 
@property (nonatomic,readonly) CGColorRef tintColor; 
@property (nonatomic,readonly) double tintAlpha; 
@required
-(CGColorRef)tintColor;
-(NSDictionary *)tintColorDescription;
-(double)tintAlpha;

@end

