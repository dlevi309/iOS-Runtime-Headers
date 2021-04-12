/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@class NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject {

	int _message;
	long long _progress;
	long long _currentPrimaryComponentID;
	NSDictionary* _captureImage;
	NSDictionary* _renderedImage;
	NSDictionary* _messageDetails;

}

@property (assign,nonatomic) long long progress;                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long currentPrimaryComponentID;              //@synthesize currentPrimaryComponentID=_currentPrimaryComponentID - In the implementation block
@property (nonatomic,retain) NSDictionary * captureImage;                      //@synthesize captureImage=_captureImage - In the implementation block
@property (nonatomic,retain) NSDictionary * renderedImage;                     //@synthesize renderedImage=_renderedImage - In the implementation block
@property (assign,nonatomic) int message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * messageDetails;                    //@synthesize messageDetails=_messageDetails - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)progress;
-(int)message;
-(void)setMessage:(int)arg1 ;
-(void)setProgress:(long long)arg1 ;
-(NSDictionary *)renderedImage;
-(NSDictionary *)captureImage;
-(void)setMessageDetails:(NSDictionary *)arg1 ;
-(void)setCaptureImage:(NSDictionary *)arg1 ;
-(void)setRenderedImage:(NSDictionary *)arg1 ;
-(long long)currentPrimaryComponentID;
-(void)setCurrentPrimaryComponentID:(long long)arg1 ;
-(NSDictionary *)messageDetails;
@end

