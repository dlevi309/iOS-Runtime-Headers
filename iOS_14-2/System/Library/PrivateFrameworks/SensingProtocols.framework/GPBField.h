/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSMutableArray;

@interface GPBField : GPBMessage

@property (assign,nonatomic) int kind; 
@property (assign,nonatomic) int cardinality; 
@property (assign,nonatomic) int number; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * typeURL; 
@property (assign,nonatomic) int oneofIndex; 
@property (assign,nonatomic) BOOL packed; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (nonatomic,copy) NSString * jsonName; 
@property (nonatomic,copy) NSString * defaultValue; 
+(id)descriptor;
@end

