/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSNumber * allowsDecimalNumbers; 
@property (nonatomic,copy) NSNumber * allowsNegativeNumbers; 
@end

