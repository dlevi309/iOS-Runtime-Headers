/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFileType:(NSString *)arg1 ;
-(id<HMDDataStreamBulkSendListener>)listener;
-(void)setListener:(id<HMDDataStreamBulkSendListener>)arg1 ;
-(NSString *)fileType;
-(id)initWithListener:(id)arg1 fileType:(id)arg2 ;
@end

