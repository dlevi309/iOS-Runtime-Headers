/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(EDCellAnchorMarker)to;
-(EDCellAnchorMarker)from;
-(id)init;
-(void)setTo:(EDCellAnchorMarker)arg1 ;
-(BOOL)isRelative;
-(int)editAs;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(void)setRelative:(BOOL)arg1 ;
-(void)setEditAs:(int)arg1 ;
@end

