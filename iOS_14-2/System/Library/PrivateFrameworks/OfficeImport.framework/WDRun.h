/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDParagraph;

@interface WDRun : NSObject {

	WDParagraph* mParagraph;

}

@property (__weak,readonly) WDParagraph * paragraph; 
-(id)init;
-(void)clearProperties;
-(id)description;
-(WDParagraph *)paragraph;
-(BOOL)isEmpty;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
@end

