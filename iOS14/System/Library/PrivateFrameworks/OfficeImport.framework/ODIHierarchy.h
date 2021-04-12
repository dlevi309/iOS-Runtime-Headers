/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

