/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class NSURL;

@interface HUClipExporterItemProvider : UIActivityItemProvider {

	NSURL* _clipURL;

}

@property (nonatomic,retain) NSURL * clipURL;              //@synthesize clipURL=_clipURL - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(NSURL *)clipURL;
-(void)setClipURL:(NSURL *)arg1 ;
@end

