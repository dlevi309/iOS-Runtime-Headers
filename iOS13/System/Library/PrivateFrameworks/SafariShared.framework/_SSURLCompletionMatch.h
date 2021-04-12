/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

@class NSURL, NSString, NSDate;


@protocol _SSURLCompletionMatch <NSObject>
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * userVisibleURLString; 
@property (nonatomic,readonly) long long matchLocation; 
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit; 
@property (getter=isSynthesizedTopHit,nonatomic,readonly) BOOL synthesizedTopHit; 
@property (getter=isTopHitDueToTriggerMatch,nonatomic,readonly) BOOL topHitDueToTriggerMatch; 
@property (nonatomic,readonly) long long visitCount; 
@property (nonatomic,readonly) NSDate * lastVisitTime; 
@required
-(NSURL *)url;
-(NSString *)title;
-(long long)visitCount;
-(NSString *)userVisibleURLString;
-(long long)matchLocation;
-(NSDate *)lastVisitTime;
-(BOOL)isTopHit;
-(BOOL)isSynthesizedTopHit;
-(BOOL)isTopHitDueToTriggerMatch;

@end

