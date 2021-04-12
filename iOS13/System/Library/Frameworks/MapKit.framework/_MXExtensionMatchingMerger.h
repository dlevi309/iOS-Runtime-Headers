/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface _MXExtensionMatchingMerger : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSArray* _mapExtensions;
	NSArray* _intentNonUIExtensions;
	NSArray* _intentUIExtensions;

}
-(id)init;
-(id)receiveExtensions:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)clearExtensions;
@end

