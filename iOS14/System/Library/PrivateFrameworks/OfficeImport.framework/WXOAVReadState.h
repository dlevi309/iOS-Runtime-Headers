/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)nextVmlShapeIdToTextBoxMap;
-(id)wxReadState;
-(id)initWithWXReadState:(id)arg1 ;
@end

