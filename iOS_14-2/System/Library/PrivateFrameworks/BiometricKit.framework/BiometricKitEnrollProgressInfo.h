/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(int)arg1 ;
-(int)message;
-(long long)progress;
-(id)init;
-(NSDictionary *)renderedImage;
-(void)setProgress:(long long)arg1 ;
-(void)dealloc;
-(void)setMessageDetails:(NSDictionary *)arg1 ;
-(void)setCaptureImage:(NSDictionary *)arg1 ;
-(void)setRenderedImage:(NSDictionary *)arg1 ;
-(long long)currentPrimaryComponentID;
-(void)setCurrentPrimaryComponentID:(long long)arg1 ;
-(NSDictionary *)captureImage;
-(NSDictionary *)messageDetails;
@end

