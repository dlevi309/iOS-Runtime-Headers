/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

