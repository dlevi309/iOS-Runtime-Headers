/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <SearchFoundation/SFImage.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface MKSearchFoundationImage : SFImage {

	NSObject*<OS_dispatch_group> _group;

}
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2 ;
@end

