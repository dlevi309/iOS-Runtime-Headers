/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


@class CPPage;

@interface CPZoneFilter : NSObject {

	CPPage* page;
	double minArea;

}
+(void)filterZonesInPage:(id)arg1 ;
-(id)initWithPage:(id)arg1 ;
-(void)filterZonesInZone:(id)arg1 ;
-(void)findBackgroundGraphicsInZone:(id)arg1 ;
-(void)findUsedGraphicsInZone:(id)arg1 ;
@end

