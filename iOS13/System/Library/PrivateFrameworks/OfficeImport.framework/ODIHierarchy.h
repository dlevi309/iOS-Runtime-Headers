/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODIState, NSMutableDictionary;

@interface ODIHierarchy : NSObject {

	int mType;
	int mMaxMappableTreeDepth;
	ODIState* mState;
	NSMutableDictionary* mNodeInfoMap;

}
+(BOOL)mapIdentifier:(id)arg1 state:(id)arg2 ;
-(void)map;
-(id)initWithType:(int)arg1 state:(id)arg2 ;
-(ODIHRangeVector*)mapRangesForNode:(id)arg1 ;
-(void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector*)arg1 ;
-(id)infoForNode:(id)arg1 ;
-(void)createInfoForNode:(id)arg1 depth:(int)arg2 ;
-(void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 ;
-(CGRect)boundsOfNode:(id)arg1 ;
-(void)mapNode:(id)arg1 ;
@end

