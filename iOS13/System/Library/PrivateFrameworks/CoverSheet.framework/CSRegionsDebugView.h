/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewBase.h>

@class NSArray;

@interface CSRegionsDebugView : CSCoverSheetViewBase {

	NSArray* _regions;

}

@property (nonatomic,retain) NSArray * regions;              //@synthesize regions=_regions - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSArray *)regions;
-(void)setRegions:(NSArray *)arg1 ;
@end

