/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/MTTimer.h>

@class NSDate, NSDictionary, NSString, MTSound;

@interface MTMutableTimer : MTTimer

@property (nonatomic,copy) NSDate * firedDate; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSDate * dismissedDate; 
@property (nonatomic,copy) NSDictionary * siriContext; 
@property (assign,nonatomic) unsigned long long state; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) MTSound * sound; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

