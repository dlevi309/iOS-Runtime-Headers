/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
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

