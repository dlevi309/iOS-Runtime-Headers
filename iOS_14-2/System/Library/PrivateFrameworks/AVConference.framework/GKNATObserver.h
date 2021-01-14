/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface GKNATObserver : NSObject

@property (assign) NSObject*<GKNATObserverDelegate> delegate; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)shouldTryNATCheck;
-(NSObject*<GKNATObserverDelegate>)delegate;
-(void)setDelegate:(NSObject*<GKNATObserverDelegate>)arg1 ;
-(int)currentNATType;
@end

