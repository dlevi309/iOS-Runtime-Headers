/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDOneCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	CGSize mSize;
	BOOL mIsRelative;

}
-(EDCellAnchorMarker)from;
-(CGSize)size;
-(BOOL)isRelative;
-(void)setSize:(CGSize)arg1 ;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(void)setRelative:(BOOL)arg1 ;
@end

