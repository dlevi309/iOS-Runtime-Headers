/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSMutableArray;

@interface GPBMethod : GPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * requestTypeURL; 
@property (assign,nonatomic) BOOL requestStreaming; 
@property (nonatomic,copy) NSString * responseTypeURL; 
@property (assign,nonatomic) BOOL responseStreaming; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (assign,nonatomic) int syntax; 
+(id)descriptor;
@end

