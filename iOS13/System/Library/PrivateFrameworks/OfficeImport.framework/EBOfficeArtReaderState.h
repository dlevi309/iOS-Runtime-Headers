/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OABReaderState.h>

@class EXReadState, EBReaderState;

@interface EBOfficeArtReaderState : OABReaderState {

	EXReadState* mXmlDocumentState;
	EBReaderState* mReaderState;

}

@property (__weak,readonly) EBReaderState * readerState; 
-(id)xmlDrawingState;
-(EBReaderState *)readerState;
-(id)initWithReaderState:(id)arg1 ;
@end

