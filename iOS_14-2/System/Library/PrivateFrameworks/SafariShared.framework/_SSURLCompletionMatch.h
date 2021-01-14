/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isTopHit;
-(NSString *)userVisibleURLString;
-(long long)visitCount;
-(NSURL *)url;
-(long long)matchLocation;
-(BOOL)isSynthesizedTopHit;
-(BOOL)isTopHitDueToTriggerMatch;
-(NSString *)title;
-(NSDate *)lastVisitTime;

@end

