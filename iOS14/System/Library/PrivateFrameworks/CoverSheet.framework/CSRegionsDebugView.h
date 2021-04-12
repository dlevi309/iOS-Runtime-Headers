/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)regions;
-(void)drawRect:(CGRect)arg1 ;
-(void)setRegions:(NSArray *)arg1 ;
@end

