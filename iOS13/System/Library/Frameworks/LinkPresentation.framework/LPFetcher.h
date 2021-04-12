/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@interface LPFetcher : NSObject {

	unsigned _loggingID;
	id _userData;

}

@property (nonatomic,readonly) unsigned _loggingID;              //@synthesize loggingID=_loggingID - In the implementation block
@property (nonatomic,retain) id userData;                        //@synthesize userData=_userData - In the implementation block
-(id)init;
-(void)cancel;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(void)fetchWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)_loggingID;
@end

