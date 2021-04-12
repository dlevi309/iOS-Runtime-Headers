/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, OAXDrawingState;

@interface ODXState : OCXReadState {

	CXNamespace* mODXDiagramNamespace;
	OAXDrawingState* mOfficeArtState;

}

@property (nonatomic,retain) CXNamespace * ODXDiagramNamespace; 
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)initWithOfficeArtState:(id)arg1 ;
-(CXNamespace *)ODXDiagramNamespace;
-(id)officeArtState;
-(void)setODXDiagramNamespace:(CXNamespace *)arg1 ;
@end

