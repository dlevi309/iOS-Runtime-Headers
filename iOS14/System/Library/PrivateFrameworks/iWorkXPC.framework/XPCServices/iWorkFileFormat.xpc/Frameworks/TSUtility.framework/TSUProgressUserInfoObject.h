/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class TSUProgress;

@interface TSUProgressUserInfoObject : NSObject {

	TSUProgress* _progress;
	id _progressObserver;

}

@property (assign,nonatomic,__weak) TSUProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id progressObserver;                        //@synthesize progressObserver=_progressObserver - In the implementation block
-(TSUProgress *)progress;
-(void)setProgress:(TSUProgress *)arg1 ;
-(id)progressObserver;
-(void)setProgressObserver:(id)arg1 ;
@end

