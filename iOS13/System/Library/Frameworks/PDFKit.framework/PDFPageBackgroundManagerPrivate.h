/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFPageBackgroundManagerDelegate, OS_dispatch_queue;
@class PDFRenderingProperties, NSMutableDictionary, NSObject;

@interface PDFPageBackgroundManagerPrivate : NSObject {

	id<PDFPageBackgroundManagerDelegate> documentDelegate;
	PDFRenderingProperties* renderingProperties;
	unsigned long long activePageIndex;
	NSMutableDictionary* backgroundImageCache[3];
	NSObject*<OS_dispatch_queue> workQueue;
	BOOL isCancled;
	BOOL isWorking;
	BOOL willForceUpdate;

}
@end

