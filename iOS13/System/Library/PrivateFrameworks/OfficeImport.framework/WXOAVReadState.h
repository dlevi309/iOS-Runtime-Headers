/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OAVReadState.h>

@class WXReadState, WDParagraph, NSMutableDictionary;

@interface WXOAVReadState : OAVReadState {

	WXReadState* mWxState;
	WDParagraph* mParagraph;
	NSMutableDictionary* mNextVmlShapeIdToTextBoxMap;

}
-(id)currentParagraph;
-(void)setCurrentParagraph:(id)arg1 ;
-(id)initWithWXReadState:(id)arg1 ;
-(id)wxReadState;
-(id)nextVmlShapeIdToTextBoxMap;
@end

