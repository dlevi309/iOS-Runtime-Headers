/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

