/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class VEKExportController;

@interface VEKProductionExport : NSObject {

	VEKExportController* _exportController;

}

@property (nonatomic,retain) VEKExportController * exportController;              //@synthesize exportController=_exportController - In the implementation block
-(void)setExportController:(VEKExportController *)arg1 ;
-(VEKExportController *)exportController;
-(void)didFinishExport;
-(void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(BOOL)arg3 ;
-(void)exportWithPresets:(id)arg1 progressHandler:(/*^block*/id)arg2 project:(id)arg3 title:(id)arg4 subtitle:(id)arg5 fontName:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_exportProject:(id)arg1 presets:(id)arg2 progressHandler:(/*^block*/id)arg3 title:(id)arg4 subtitle:(id)arg5 fontName:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
@end

