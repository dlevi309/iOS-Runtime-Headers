/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class NSURL;

@interface HUClipExporterItemProvider : UIActivityItemProvider {

	NSURL* _clipURL;

}

@property (nonatomic,retain) NSURL * clipURL;              //@synthesize clipURL=_clipURL - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)item;
-(NSURL *)clipURL;
-(void)setClipURL:(NSURL *)arg1 ;
@end

