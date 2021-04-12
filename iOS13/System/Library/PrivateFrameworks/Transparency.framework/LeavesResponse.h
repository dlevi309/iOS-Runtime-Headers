/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSMutableArray;

@interface LeavesResponse : GPBMessage

@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int logType; 
@property (nonatomic,retain) NSMutableArray * leavesArray; 
@property (nonatomic,readonly) unsigned long long leavesArray_Count; 
+(id)descriptor;
@end

