/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

