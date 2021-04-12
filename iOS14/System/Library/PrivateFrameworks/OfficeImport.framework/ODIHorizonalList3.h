/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODIState;

@interface ODIHorizonalList3 : NSObject {

	unsigned mMaxPointCount;
	ODIState* mState;

}
+(BOOL)mapIdentifier:(id)arg1 state:(id)arg2 ;
-(id)initWithState:(id)arg1 ;
-(void)map;
-(void)setMaxPointCount:(unsigned)arg1 ;
-(void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(void)mapPillarPoints:(id)arg1 bounds:(CGRect)arg2 ;
-(void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2 ;
@end

