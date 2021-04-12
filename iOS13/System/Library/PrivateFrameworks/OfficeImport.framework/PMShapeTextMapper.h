/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class OADTextBody, OADOrientedBounds, CMStyle;

@interface PMShapeTextMapper : CMMapper {

	OADTextBody* mTextBody;
	OADOrientedBounds* mBounds;
	CMStyle* mStyle;
	BOOL mRectangular;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3 ;
-(unsigned char)textAnchor;
-(void)setRectangular:(BOOL)arg1 ;
-(BOOL)isTableCellContent;
@end

