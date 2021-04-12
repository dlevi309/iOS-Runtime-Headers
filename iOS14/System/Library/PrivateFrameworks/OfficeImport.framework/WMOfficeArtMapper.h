/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDrawableMapper.h>

@class WDAContent;

@interface WMOfficeArtMapper : CMDrawableMapper {

	BOOL mFloating;
	BOOL mIsMapped;
	BOOL mIsInsideGroup;
	WDAContent* mContent;
	unsigned mCurrentPage;

}
-(void)setCurrentPage:(unsigned)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)blipAtIndex:(unsigned)arg1 ;
-(id)initWithOadDrawable:(id)arg1 asFloating:(BOOL)arg2 parent:(id)arg3 ;
-(void)setBoundingBox;
-(void)setWithClientData:(id)arg1 state:(id)arg2 ;
-(void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDiagramAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2 ;
-(BOOL)isInsideGroup;
-(void)setIsInsideGroup:(BOOL)arg1 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)expandedSizeForTextBox:(id)arg1 withState:(id)arg2 ;
@end

