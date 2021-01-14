/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)drawRect:(CGRect)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(void)heartbeat;
-(id)initWithFrame:(CGRect)arg1 withDocument:(id)arg2 ;
-(void)addedPageView:(int)arg1 ;
-(void)removedPageView:(int)arg1 ;
@end

