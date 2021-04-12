/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

