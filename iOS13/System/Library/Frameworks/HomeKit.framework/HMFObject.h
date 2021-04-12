/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class NSString, NSArray;


@protocol HMFObject <NSObject>
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@optional
-(NSString *)propertyDescription;
-(NSArray *)attributeDescriptions;

@required
+(NSString *)shortDescription;
-(NSString *)shortDescription;
-(NSString *)privateDescription;

@end

