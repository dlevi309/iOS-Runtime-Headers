/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/_SSURLCompletionMatch.h>

@class NSURL, NSString, NSDate;

@interface WBSURLCompletionMatchSnapshot : NSObject <NSSecureCoding, _SSURLCompletionMatch> {

	BOOL _topHit;
	BOOL _synthesizedTopHit;
	BOOL _topHitDueToTriggerMatch;
	NSURL* _url;
	NSString* _title;
	NSString* _userVisibleURLString;
	long long _matchLocation;
	long long _visitCount;
	NSDate* _lastVisitTime;

}

@property (nonatomic,copy,readonly) NSURL * url;                                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * userVisibleURLString;                                       //@synthesize userVisibleURLString=_userVisibleURLString - In the implementation block
@property (nonatomic,readonly) long long matchLocation;                                                    //@synthesize matchLocation=_matchLocation - In the implementation block
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit;                                                //@synthesize topHit=_topHit - In the implementation block
@property (getter=isSynthesizedTopHit,nonatomic,readonly) BOOL synthesizedTopHit;                          //@synthesize synthesizedTopHit=_synthesizedTopHit - In the implementation block
@property (getter=isTopHitDueToTriggerMatch,nonatomic,readonly) BOOL topHitDueToTriggerMatch;              //@synthesize topHitDueToTriggerMatch=_topHitDueToTriggerMatch - In the implementation block
@property (nonatomic,readonly) long long visitCount;                                                       //@synthesize visitCount=_visitCount - In the implementation block
@property (nonatomic,readonly) NSDate * lastVisitTime;                                                     //@synthesize lastVisitTime=_lastVisitTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isTopHit;
-(NSString *)userVisibleURLString;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)visitCount;
-(NSURL *)url;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)matchLocation;
-(id)initWithURL:(id)arg1 title:(id)arg2 matchLocation:(long long)arg3 isTopHit:(BOOL)arg4 isSynthesizedTopHit:(BOOL)arg5 isTopHitDueToTriggerMatch:(BOOL)arg6 visitCount:(long long)arg7 lastVisitTime:(id)arg8 ;
-(BOOL)isSynthesizedTopHit;
-(BOOL)isTopHitDueToTriggerMatch;
-(NSString *)title;
-(NSDate *)lastVisitTime;
@end

