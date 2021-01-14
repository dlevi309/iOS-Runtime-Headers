/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSString;

@interface VCVideoRule : NSObject {

	int _width;
	int _height;
	float _frameRate;
	float _priority;
	int _payload;

}

@property (nonatomic,readonly) int iWidth;                          //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int iHeight;                         //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) float fRate;                         //@synthesize frameRate=_frameRate - In the implementation block
@property (nonatomic,readonly) int iPayload;                        //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSString * description; 
@property (assign,nonatomic) float fPref;                           //@synthesize priority=_priority - In the implementation block
-(long long)compare:(id)arg1 ;
-(float)fRate;
-(float)fPref;
-(int)iWidth;
-(NSString *)description;
-(int)iHeight;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 ;
-(id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4 priority:(float)arg5 ;
-(int)iPayload;
-(void)setFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 ;
-(id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4 ;
-(long long)compareByPref:(id)arg1 ;
-(void)setToVideoRule:(id)arg1 ;
-(BOOL)isVideoFullHD;
-(void)setFPref:(float)arg1 ;
@end

