/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface GKNATObserver : NSObject

@property (assign) NSObject*<GKNATObserverDelegate> delegate; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(NSObject*<GKNATObserverDelegate>)delegate;
-(void)setDelegate:(NSObject*<GKNATObserverDelegate>)arg1 ;
-(int)currentNATType;
-(void)shouldTryNATCheck;
@end

