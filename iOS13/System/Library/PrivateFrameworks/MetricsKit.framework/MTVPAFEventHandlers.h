/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventHandlers.h>

@class MTBaseEventDataProvider, MTMediaActivityEventHandler;

@interface MTVPAFEventHandlers : MTEventHandlers {

	MTBaseEventDataProvider* _base;
	MTMediaActivityEventHandler* _playStart;
	MTMediaActivityEventHandler* _playStop;
	MTMediaActivityEventHandler* _seekStart;
	MTMediaActivityEventHandler* _seekStop;

}

@property (nonatomic,readonly) MTMediaActivityEventHandler * playStart;              //@synthesize playStart=_playStart - In the implementation block
@property (nonatomic,readonly) MTMediaActivityEventHandler * playStop;               //@synthesize playStop=_playStop - In the implementation block
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStart;              //@synthesize seekStart=_seekStart - In the implementation block
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStop;               //@synthesize seekStop=_seekStop - In the implementation block
-(void)setBase:(id)arg1 ;
-(id)base;
-(MTMediaActivityEventHandler *)playStart;
-(MTMediaActivityEventHandler *)playStop;
-(MTMediaActivityEventHandler *)seekStart;
-(MTMediaActivityEventHandler *)seekStop;
@end

