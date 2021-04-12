/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Intents/INIntent.h>

@class NSString, NSNumber, NSURL, NSDateComponents;

@interface WFAskForInputIntent : INIntent

@property (nonatomic,copy) NSString * question; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * stringAnswer; 
@property (nonatomic,copy) NSNumber * numberAnswer; 
@property (nonatomic,copy) NSURL * urlAnswer; 
@property (nonatomic,copy) NSString * defaultURLAnswer; 
@property (nonatomic,copy) NSDateComponents * dateAnswer; 
@property (nonatomic,copy) NSDateComponents * timeAnswer; 
@property (nonatomic,copy) NSDateComponents * dateAndTimeAnswer; 
@end

