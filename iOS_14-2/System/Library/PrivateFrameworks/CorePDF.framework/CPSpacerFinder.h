/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPZone, NSMutableArray;

@interface CPSpacerFinder : NSObject <CPDisposable> {

	CPZone* contentZone;
	CGRect zoneBounds;
	CGRect textBounds;
	SCD_Struct_CP33* spacerSequence;
	NSMutableArray* spacers;
	unsigned segmentationCount;
	SCD_Struct_CP34* segmentations;
	SCD_Struct_CP35* qualityEntries;

}
-(void)finalize;
-(void)dispose;
-(id)spacers;
-(void)dealloc;
-(id)initWithContentZone:(id)arg1 ;
-(void)findSpacers;
-(void)splitTextLines;
-(void)initializeSegmentations;
-(void)initializeJunctions;
-(void)assessQuality;
-(void)determineValidity;
@end

