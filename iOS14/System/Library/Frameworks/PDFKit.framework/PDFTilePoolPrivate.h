/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol OS_dispatch_queue;
#import <PDFKit/PDFKit-Structs.h>
@class NSObject, NSMutableDictionary;

@interface PDFTilePoolPrivate : NSObject {

	NSObject*<OS_dispatch_queue> workQueue;
	os_unfair_lock_s surfacesLock;
	NSMutableDictionary* surfaces;
	int surfaceType;

}
@end

