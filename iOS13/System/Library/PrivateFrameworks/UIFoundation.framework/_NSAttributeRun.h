/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTextStorage, NSMutableArray;

@interface _NSAttributeRun : NSObject <NSCopying> {

	NSRange _range;
	NSTextStorage* _textStorage;
	NSMutableArray* _attributesArray;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(id)initWithTextStorage:(id)arg1 range:(NSRange)arg2 ;
-(void)restoreAttributesOfTextStorage:(id)arg1 ;
@end

