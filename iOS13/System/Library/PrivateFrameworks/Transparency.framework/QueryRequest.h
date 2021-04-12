/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSMutableArray, NSData;

@interface QueryRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int application; 
@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,retain) NSMutableArray * devicesArray; 
@property (nonatomic,readonly) unsigned long long devicesArray_Count; 
@property (nonatomic,copy) NSData * accountId; 
+(id)descriptor;
@end

