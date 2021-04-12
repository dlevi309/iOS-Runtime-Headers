/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@interface TTZoomController : NSObject {

	double _zoomFactor;
	double _checklistZoomFactor;

}

@property (assign,nonatomic) double zoomFactor;                       //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) double checklistZoomFactor;              //@synthesize checklistZoomFactor=_checklistZoomFactor - In the implementation block
-(id)init;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(id)unzoomAttributedString:(id)arg1 ;
-(id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(BOOL)arg2 ;
-(id)zoomFont:(id)arg1 ;
-(id)unzoomFont:(id)arg1 ;
-(id)reallyZoomAttributes:(id)arg1 zoomDirection:(BOOL)arg2 ;
-(id)reallyZoomAttributedString:(id)arg1 zoomDirection:(BOOL)arg2 ;
-(double)checklistZoomFactor;
-(id)zoomFontInAttributes:(id)arg1 ;
-(id)unzoomFontInAttributes:(id)arg1 ;
-(id)zoomAttributes:(id)arg1 ;
-(id)unzoomAttributes:(id)arg1 ;
-(id)zoomAttributedString:(id)arg1 ;
-(void)setChecklistZoomFactor:(double)arg1 ;
@end

