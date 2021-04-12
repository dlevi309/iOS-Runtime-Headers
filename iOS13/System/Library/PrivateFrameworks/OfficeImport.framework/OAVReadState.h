/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCXReadState.h>

@class OCPPackagePart, NSMutableDictionary, NSMutableSet, OAXDrawingState;

@interface OAVReadState : OCXReadState {

	Class mClient;
	OCPPackagePart* mPackagePart;
	NSMutableDictionary* mShapeTypes;
	NSMutableDictionary* mShapeIdMap;
	NSMutableSet* mDualDrawables;
	OAXDrawingState* mOAXState;

}

@property (__weak) OAXDrawingState * oaxState; 
-(Class)client;
-(id)packagePart;
-(void)setPackagePart:(id)arg1 ;
-(void)resetForNewDrawing;
-(id)blipRefForURL:(id)arg1 ;
-(id)drawableForVmlShapeId:(id)arg1 ;
-(void)addDualDrawable:(id)arg1 ;
-(void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2 ;
-(unsigned)officeArtShapeIdWithVmlShapeId:(id)arg1 ;
-(unsigned short)shapeTypeForId:(id)arg1 ;
-(id)initWithClient:(Class)arg1 packagePart:(id)arg2 ;
-(void)setShapeType:(unsigned short)arg1 forId:(id)arg2 ;
-(BOOL)isDualDrawable:(id)arg1 ;
-(OAXDrawingState *)oaxState;
-(void)setOaxState:(OAXDrawingState *)arg1 ;
@end

