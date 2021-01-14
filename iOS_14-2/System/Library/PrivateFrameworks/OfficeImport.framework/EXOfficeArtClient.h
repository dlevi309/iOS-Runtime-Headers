/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXClient.h>

@interface EXOfficeArtClient : OAXClient {

	BOOL mAutoChartFillIsHollow;
	BOOL mAutoChartStrokeIsHollow;

}

@property (assign) BOOL autoChartFillIsHollow; 
@property (assign) BOOL autoChartStrokeIsHollow; 
-(void)readClientDataFromNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(BOOL)chartAutoFillIsHollow;
-(BOOL)chartAutoStrokeIsHollow;
-(void)setAutoChartFillIsHollow:(BOOL)arg1 ;
-(void)setAutoChartStrokeIsHollow:(BOOL)arg1 ;
-(BOOL)autoChartFillIsHollow;
-(BOOL)autoChartStrokeIsHollow;
@end

