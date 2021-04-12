/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <SearchFoundation/SFImage.h>

@protocol OS_dispatch_group;
@class NSObject, NSURL, GEOStyleAttribute;

@interface MKSearchFoundationImage : SFImage {

	NSObject*<OS_dispatch_group> _group;
	NSURL* _url;
	GEOStyleAttribute* _styleAttribute;

}
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

