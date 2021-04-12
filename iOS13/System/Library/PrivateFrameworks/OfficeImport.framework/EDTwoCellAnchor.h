/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDTwoCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	EDCellAnchorMarker mTo;
	BOOL mIsRelative;
	int mEditAs;

}
-(id)init;
-(EDCellAnchorMarker)to;
-(EDCellAnchorMarker)from;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(void)setTo:(EDCellAnchorMarker)arg1 ;
-(BOOL)isRelative;
-(void)setRelative:(BOOL)arg1 ;
-(int)editAs;
-(void)setEditAs:(int)arg1 ;
@end

