/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, UILabel, UIPDFDocument, NSMutableSet;

@interface UIPDFWidget : UIView {

	int queueIndex;
	int queueCount;
	SCD_Struct_UI0 queueData[60];
	int currentPageCount;
	int totalPageCount;
	int renderJobsCount;
	NSTimer* heartbeatTimer;
	UILabel* infoLabel;
	UIPDFDocument* activeDocument;
	NSMutableSet* trackedPages;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)heartbeat;
-(id)initWithFrame:(CGRect)arg1 withDocument:(id)arg2 ;
-(void)addedPageView:(int)arg1 ;
-(void)removedPageView:(int)arg1 ;
@end

