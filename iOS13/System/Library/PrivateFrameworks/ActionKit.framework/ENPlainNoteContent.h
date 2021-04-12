/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ENNoteContent.h>

@class NSArray;

@interface ENPlainNoteContent : ENNoteContent {

	NSArray* _contents;

}

@property (nonatomic,copy) NSArray * contents;              //@synthesize contents=_contents - In the implementation block
-(id)initWithString:(id)arg1 ;
-(NSArray *)contents;
-(void)setContents:(NSArray *)arg1 ;
-(id)initWithContents:(id)arg1 ;
-(id)enmlWithNote:(id)arg1 ;
@end

