/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramMapper.h>

@class OADOrientedBounds, NSString;

@interface CMDiagramShapeMapper : CMDiagramMapper {

	unsigned long long mChildCount;
	OADOrientedBounds* mDiagramShapeBounds;
	NSString* mIdentifier;
	float mDefaultFontSize;
	int mMaxMappableTreeDepth;
	float mDefaultScale;

}
-(float)defaultFontSize;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(CGRect)circumscribedBounds;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(void)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(CGSize)textSizeForShapeSize:(CGSize)arg1 ;
-(void)setDefaultFonSize;
@end

