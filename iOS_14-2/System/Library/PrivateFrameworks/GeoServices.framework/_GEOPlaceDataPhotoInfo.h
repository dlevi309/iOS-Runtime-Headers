/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapItemPhotoInfo.h>

@class NSURL, NSString;

@interface _GEOPlaceDataPhotoInfo : NSObject <GEOMapItemPhotoInfo> {

	NSURL* _url;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(NSURL *)url;
-(NSString *)description;
-(id)initWithURL:(id)arg1 width:(double)arg2 height:(double)arg3 ;
@end

