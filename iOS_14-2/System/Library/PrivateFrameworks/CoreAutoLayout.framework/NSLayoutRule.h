/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

@class NSString;


@protocol NSLayoutRule <NSObject,NSCopying>
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
@required
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(NSString *)identifier;

@end

