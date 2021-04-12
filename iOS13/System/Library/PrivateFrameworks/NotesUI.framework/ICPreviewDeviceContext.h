/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSArray;

@interface ICPreviewDeviceContext : NSObject {

	NSArray* _deviceScales;
	NSArray* _scalableDeviceInfo;
	NSArray* _nonScalableDeviceInfo;

}

@property (copy) NSArray * scalableDeviceInfo;                 //@synthesize scalableDeviceInfo=_scalableDeviceInfo - In the implementation block
@property (copy) NSArray * nonScalableDeviceInfo;              //@synthesize nonScalableDeviceInfo=_nonScalableDeviceInfo - In the implementation block
@property (readonly) NSArray * deviceScales; 
@property (readonly) double maxDeviceScale; 
+(id)sharedContext;
-(id)init;
-(void)dealloc;
-(NSArray *)deviceScales;
-(id)deviceInfoScalable:(BOOL)arg1 ;
-(void)screensChangedNotification:(id)arg1 ;
-(NSArray *)scalableDeviceInfo;
-(void)setScalableDeviceInfo:(NSArray *)arg1 ;
-(NSArray *)nonScalableDeviceInfo;
-(void)setNonScalableDeviceInfo:(NSArray *)arg1 ;
-(double)maxDeviceScale;
-(double)maxSizeOfPreviewDeviceInfoImage;
@end

