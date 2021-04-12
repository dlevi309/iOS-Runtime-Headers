/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

