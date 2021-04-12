/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSData, NSMutableArray;

@interface QueryRequest_Device : GPBMessage

@property (nonatomic,copy) NSData * deviceId; 
@property (nonatomic,retain) NSMutableArray * clientDataArray; 
@property (nonatomic,readonly) unsigned long long clientDataArray_Count; 
+(id)descriptor;
@end

