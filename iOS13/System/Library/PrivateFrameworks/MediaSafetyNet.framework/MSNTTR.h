/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaSafetyNet.framework/MediaSafetyNet
*/


@class NSURL;

@interface MSNTTR : NSObject {

	NSURL* _url;

}

@property (retain) NSURL * url;                       //@synthesize url=_url - In the implementation block
@property (readonly) BOOL TTRInProgress; 
+(id)sharedInstance;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)TTRInProgress;
-(void)continueTTR;
-(void)beginTTRWithTitle:(id)arg1 ;
-(void)completeTTR:(id)arg1 ;
@end

