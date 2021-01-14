/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPhotoInfoProvider.h>

@class AMSMediaArtwork, GEOPDPhotoContent, NSString;

@interface GEOAMPPhotoInfoProvider : NSObject <GEOPhotoInfoProvider> {

	AMSMediaArtwork* _artwork;
	GEOPDPhotoContent* _templatePhotoContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)designatedURLType;
-(id)largestPhoto;
-(id)initWithPhotoContent:(id)arg1 ;
-(id)bestPhotoForSize:(CGSize)arg1 options:(id)arg2 ;
-(double)sizeRatio;
@end

