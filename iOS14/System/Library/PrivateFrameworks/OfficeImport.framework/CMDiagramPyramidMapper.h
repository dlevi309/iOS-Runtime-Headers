/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramPyramidMapper : CMDiagramShapeMapper {

	BOOL mIsFlipped;

}
-(void)setIsFlipped:(BOOL)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_suggestedBoundsForNodeAtIndex:(unsigned long long)arg1 ;
@end

