/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSArray;

@interface AVMetadataGroup : NSObject

@property (nonatomic,readonly) NSString * classifyingLabel; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(void)initialize;
-(NSString *)uniqueID;
-(NSArray *)items;
-(NSString *)classifyingLabel;
-(opaqueCMFormatDescriptionRef)copyFormatDescription;
@end

