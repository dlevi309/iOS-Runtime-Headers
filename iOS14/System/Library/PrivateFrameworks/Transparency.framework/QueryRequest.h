/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSData, NSString, NSMutableArray;

@interface QueryRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int application; 
@property (nonatomic,copy) NSData * uriVrfOutput; 
@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,retain) NSMutableArray * devicesArray; 
@property (nonatomic,readonly) unsigned long long devicesArray_Count; 
@property (nonatomic,copy) NSData * accountId; 
+(id)descriptor;
@end

