/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

