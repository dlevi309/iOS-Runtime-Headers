/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHDSeries.h>
#import <libobjc.A.dylib/CHDMarkerOwner.h>

@class CHDMarker, NSString;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {

	CHDMarker* mMarker;
	BOOL mSmooth;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)marker;
-(id)initWithChart:(id)arg1 ;
-(void)setMarker:(id)arg1 ;
-(void)setSmooth:(BOOL)arg1 ;
-(BOOL)isSmooth;
@end

