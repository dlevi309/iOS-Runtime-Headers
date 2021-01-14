/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSMutableDictionary;

@interface MFPhotoPickerProgressManager : NSObject {

	NSMutableDictionary* _progressItems;

}

@property (nonatomic,readonly) NSMutableDictionary * progressItems;              //@synthesize progressItems=_progressItems - In the implementation block
-(id)init;
-(double)progressForIndexPath:(id)arg1 ;
-(NSMutableDictionary *)progressItems;
-(BOOL)anyRequestExists;
-(BOOL)requestExistsForIndexPath:(id)arg1 ;
-(void)setProgress:(double)arg1 forIndexPath:(id)arg2 ;
-(void)setExportSession:(id)arg1 forIndexPath:(id)arg2 ;
-(void)cancelEverythingAtIndexPath:(id)arg1 ;
-(void)setImageRequestID:(int)arg1 forIndexPath:(id)arg2 ;
-(void)_cancelProgressItem:(id)arg1 ;
-(void)cancelEverything;
@end

