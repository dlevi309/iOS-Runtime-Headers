/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDOneCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	CGSize mSize;
	BOOL mIsRelative;

}
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(EDCellAnchorMarker)from;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(BOOL)isRelative;
-(void)setRelative:(BOOL)arg1 ;
@end

