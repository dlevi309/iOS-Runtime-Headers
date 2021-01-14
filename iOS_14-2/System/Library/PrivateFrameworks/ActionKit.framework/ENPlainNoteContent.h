/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ENNoteContent.h>

@class NSArray;

@interface ENPlainNoteContent : ENNoteContent {

	NSArray* _contents;

}

@property (nonatomic,copy) NSArray * contents;              //@synthesize contents=_contents - In the implementation block
-(NSArray *)contents;
-(id)initWithString:(id)arg1 ;
-(void)setContents:(NSArray *)arg1 ;
-(id)initWithContents:(id)arg1 ;
-(id)enmlWithNote:(id)arg1 ;
@end

