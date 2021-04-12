/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPGraphicsState, NSMutableArray, MFPObjectTable, NSMutableDictionary;

@interface MFPGraphics : NSObject {

	CGRect mCanvas;
	int mHorzDpi;
	int mVertDpi;
	MFPGraphicsState* mCurrentState;
	NSMutableArray* mStateStack;
	MFPObjectTable* mObjectTable;
	NSMutableDictionary* mAvailableFonts;

}
+(float)unitsPerInch:(int)arg1 ;
-(id)currentState;
-(id)initWithCanvas:(CGRect)arg1 ;
-(CGRect)canvas;
-(void)setHorizontalDpi:(int)arg1 verticalDpi:(int)arg2 ;
-(id)objectTable;
-(void)fillPath:(id)arg1 brush:(id)arg2 ;
-(void)strokePath:(id)arg1 pen:(id)arg2 ;
-(void)saveGraphicsStateWithId:(unsigned)arg1 ;
-(void)restoreGraphicsStateOrEndContainerWithId:(unsigned)arg1 ;
-(void)beginContainerWithId:(unsigned)arg1 boundsInParent:(CGRect)arg2 bounds:(CGRect)arg3 boundsUnit:(int)arg4 ;
-(void)beginContainerNoParamsWithId:(unsigned)arg1 ;
-(CGAffineTransform)pageTransformWithScale:(float)arg1 unit:(int)arg2 ;
-(BOOL)areThereOpenContainers;
-(float)pixelsPerUnit:(int)arg1 direction:(int)arg2 ;
-(void)beginContainerWithId:(unsigned)arg1 containerTransform:(CGAffineTransform)arg2 ;
-(id)fontNameForUppercaseFontName:(id)arg1 ;
@end

