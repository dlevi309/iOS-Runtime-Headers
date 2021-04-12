/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSMutableDictionary, NSMutableArray;

@interface NSISPlaybackOperation : NSObject {

	NSMutableDictionary* oldIdentsToNewVariables;
	NSMutableArray* variableDelegates;

}
-(id)init;
-(void)dealloc;
-(void)_addToEngine:(id)arg1 ;
-(id)unwrapVariable:(id)arg1 ;
-(id)unwrapLinearExpression:(id)arg1 onEngine:(id)arg2 ;
-(void)playbackOneAction:(id)arg1 onEngine:(id)arg2 ;
@end

