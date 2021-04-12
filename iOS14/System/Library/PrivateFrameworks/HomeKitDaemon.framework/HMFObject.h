/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSString, NSArray;


@protocol HMFObject <NSObject>
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@optional
-(NSArray *)attributeDescriptions;
-(NSString *)propertyDescription;

@required
+(NSString *)shortDescription;
-(NSString *)privateDescription;
-(NSString *)shortDescription;

@end

