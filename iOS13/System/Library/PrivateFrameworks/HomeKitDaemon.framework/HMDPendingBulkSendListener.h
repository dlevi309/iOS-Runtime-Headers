/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDDataStreamBulkSendListener;
@class NSString;

@interface HMDPendingBulkSendListener : NSObject {

	id<HMDDataStreamBulkSendListener> _listener;
	NSString* _fileType;

}

@property (assign,nonatomic,__weak) id<HMDDataStreamBulkSendListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSString * fileType;                                            //@synthesize fileType=_fileType - In the implementation block
-(id<HMDDataStreamBulkSendListener>)listener;
-(NSString *)fileType;
-(void)setListener:(id<HMDDataStreamBulkSendListener>)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(id)initWithListener:(id)arg1 fileType:(id)arg2 ;
@end

