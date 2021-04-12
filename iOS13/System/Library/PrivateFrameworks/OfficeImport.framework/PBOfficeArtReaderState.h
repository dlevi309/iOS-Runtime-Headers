/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OABReaderState.h>

@class PXPresentationState, PBPresentationReaderState;

@interface PBOfficeArtReaderState : OABReaderState {

	PXPresentationState* mXmlDocumentState;
	PBPresentationReaderState* mPresentationState;

}

@property (__weak,readonly) PBPresentationReaderState * presentationState; 
-(PBPresentationReaderState *)presentationState;
-(id)xmlDrawingState;
-(id)drawableOnTgtSlideForShapeId:(int)arg1 ;
-(id)xmlDocumentState;
-(id)initWithPresentationState:(id)arg1 ;
@end

