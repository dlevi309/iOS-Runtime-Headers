/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADDrawable.h>

@class ODDNodePoint, ODDColorTransform, ODDStyleDefinition, NSArray;

@interface ODDDiagram : OADDrawable {

	ODDNodePoint* mDocumentPoint;
	ODDColorTransform* mColorTransform;
	ODDStyleDefinition* mStyleDefinition;
	NSArray* mEquivalentDrawables;

}

@property (nonatomic,retain) NSArray * equivalentDrawables; 
-(id)init;
-(id)description;
-(id)colorTransform;
-(id)documentPoint;
-(id)styleDefinition;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)setEquivalentDrawables:(NSArray *)arg1 ;
-(void)setDocumentPoint:(id)arg1 ;
-(NSArray *)equivalentDrawables;
@end

