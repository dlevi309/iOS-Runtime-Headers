/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SALCMViewingContext.h>

@class NSDate;

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext

@property (nonatomic,copy) NSDate * eventStartTime; 
@property (assign,nonatomic) BOOL watchingLive; 
+(id)liveStreamingViewingContext;
+(id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)eventStartTime;
-(void)setEventStartTime:(NSDate *)arg1 ;
-(BOOL)watchingLive;
-(void)setWatchingLive:(BOOL)arg1 ;
@end

