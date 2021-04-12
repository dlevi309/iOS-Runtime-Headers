/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

@class NSDictionary;


@protocol BWDataBufferBackedFormat <NSObject>
@property (nonatomic,readonly) unsigned long long dataBufferSize; 
@property (nonatomic,readonly) unsigned dataFormat; 
@property (nonatomic,readonly) NSDictionary * dataBufferAttributes; 
@required
-(NSDictionary *)dataBufferAttributes;
-(unsigned long long)dataBufferSize;
-(unsigned)dataFormat;

@end

