/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

