/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/TTParagraphStyle.h>

@interface TTMutableParagraphStyle : TTParagraphStyle

@property (assign,nonatomic) unsigned style; 
@property (assign,nonatomic) unsigned long long alignment; 
@property (assign,nonatomic) long long writingDirection; 
@property (assign,nonatomic) unsigned long long indent; 
@property (assign,nonatomic) unsigned long long startingItemNumber; 
@property (assign,nonatomic) unsigned hints; 
@property (assign,nonatomic) BOOL needsParagraphCleanup; 
@property (assign,nonatomic) BOOL needsListCleanup; 
+(id)paragraphStyleNamed:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

