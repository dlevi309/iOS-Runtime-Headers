/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPAttachment.h>

@interface TSWPUIGraphicalAttachment : TSWPAttachment

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double baselineOffset; 
-(void)invalidate;
-(CGSize)size;
-(double)baselineOffset;
-(int)elementKind;
-(id)rendererForAttachment;
-(BOOL)wantsSelectionAtPoint:(CGPoint)arg1 ;
@end

