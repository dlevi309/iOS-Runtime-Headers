/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDDrawableLayout.h>
#import <TSReading/TSWPTextEditingHostLayout.h>

@class TSWPShapeInfo, TSWPShapeLayout, NSString;

@interface TSWPTextHostLayout : TSDDrawableLayout <TSWPTextEditingHostLayout> {

	TSWPShapeInfo* _editingShapeInfo;
	TSWPShapeLayout* _editingShapeLayout;

}

@property (nonatomic,readonly) TSWPShapeLayout * editingShapeLayout;              //@synthesize editingShapeLayout=_editingShapeLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSWPShapeInfo * editingShape;                        //@synthesize editingShapeInfo=_editingShapeInfo - In the implementation block
-(void)dealloc;
-(void)updateChildrenFromInfo;
-(TSWPShapeInfo *)editingShape;
-(void)setEditingShape:(TSWPShapeInfo *)arg1 ;
-(TSWPShapeLayout *)editingShapeLayout;
@end

