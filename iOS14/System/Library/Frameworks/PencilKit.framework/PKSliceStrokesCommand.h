/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKModifyStrokesCommand.h>

@class NSDictionary;

@interface PKSliceStrokesCommand : PKModifyStrokesCommand {

	NSDictionary* _substrokes;

}

@property (nonatomic,readonly) NSDictionary * substrokes;              //@synthesize substrokes=_substrokes - In the implementation block
-(id)description;
-(void)applyToDrawing:(id)arg1 ;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 substrokes:(id)arg3 strokesHidden:(id)arg4 hiding:(BOOL)arg5 ;
-(NSDictionary *)substrokes;
@end

