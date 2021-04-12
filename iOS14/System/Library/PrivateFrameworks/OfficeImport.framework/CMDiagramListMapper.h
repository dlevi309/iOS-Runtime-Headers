/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramListMapper : CMDiagramShapeMapper {

	float mMaxLineCount;

}
-(CGSize)textSize;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDefaultFonSize;
-(void)mapListItemAt:(id)arg1 index:(unsigned long long)arg2 withState:(id)arg3 ;
-(id)suggestedBoundsForHListItemWithIndex:(unsigned long long)arg1 ;
@end

