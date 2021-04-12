/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSMutableDictionary;

@interface MFPhotoPickerProgressManager : NSObject {

	NSMutableDictionary* _progressItems;

}

@property (nonatomic,readonly) NSMutableDictionary * progressItems;              //@synthesize progressItems=_progressItems - In the implementation block
-(id)init;
-(BOOL)anyRequestExists;
-(void)cancelEverything;
-(double)progressForIndexPath:(id)arg1 ;
-(BOOL)requestExistsForIndexPath:(id)arg1 ;
-(void)setProgress:(double)arg1 forIndexPath:(id)arg2 ;
-(void)setExportSession:(id)arg1 forIndexPath:(id)arg2 ;
-(void)cancelEverythingAtIndexPath:(id)arg1 ;
-(void)setImageRequestID:(int)arg1 forIndexPath:(id)arg2 ;
-(NSMutableDictionary *)progressItems;
-(void)_cancelProgressItem:(id)arg1 ;
@end

