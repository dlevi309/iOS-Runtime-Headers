/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDParagraph;

@interface WDRun : NSObject {

	WDParagraph* mParagraph;

}

@property (__weak,readonly) WDParagraph * paragraph; 
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(void)clearProperties;
-(WDParagraph *)paragraph;
-(id)initWithParagraph:(id)arg1 ;
-(int)runType;
@end

