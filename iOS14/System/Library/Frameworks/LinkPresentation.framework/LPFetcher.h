/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPEvent;

@interface LPFetcher : NSObject {

	unsigned _loggingID;
	LPEvent* _event;
	id _userData;

}

@property (nonatomic,readonly) unsigned _loggingID;              //@synthesize loggingID=_loggingID - In the implementation block
@property (nonatomic,retain) LPEvent * _event;                   //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) id userData;                        //@synthesize userData=_userData - In the implementation block
-(LPEvent *)_event;
-(void)fetchWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(unsigned)_loggingID;
-(void)set_event:(LPEvent *)arg1 ;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(void)cancel;
@end

