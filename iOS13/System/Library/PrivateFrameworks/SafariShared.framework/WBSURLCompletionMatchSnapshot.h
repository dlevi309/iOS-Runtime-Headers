/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSURL * url;                                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * userVisibleURLString;                                       //@synthesize userVisibleURLString=_userVisibleURLString - In the implementation block
@property (nonatomic,readonly) long long matchLocation;                                                    //@synthesize matchLocation=_matchLocation - In the implementation block
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit;                                                //@synthesize topHit=_topHit - In the implementation block
@property (getter=isSynthesizedTopHit,nonatomic,readonly) BOOL synthesizedTopHit;                          //@synthesize synthesizedTopHit=_synthesizedTopHit - In the implementation block
@property (getter=isTopHitDueToTriggerMatch,nonatomic,readonly) BOOL topHitDueToTriggerMatch;              //@synthesize topHitDueToTriggerMatch=_topHitDueToTriggerMatch - In the implementation block
@property (nonatomic,readonly) long long visitCount;                                                       //@synthesize visitCount=_visitCount - In the implementation block
@property (nonatomic,readonly) NSDate * lastVisitTime;                                                     //@synthesize lastVisitTime=_lastVisitTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(long long)visitCount;
-(NSString *)userVisibleURLString;
-(long long)matchLocation;
-(NSDate *)lastVisitTime;
-(BOOL)isTopHit;
-(id)initWithURL:(id)arg1 title:(id)arg2 matchLocation:(long long)arg3 isTopHit:(BOOL)arg4 isSynthesizedTopHit:(BOOL)arg5 isTopHitDueToTriggerMatch:(BOOL)arg6 visitCount:(long long)arg7 lastVisitTime:(id)arg8 ;
-(BOOL)isSynthesizedTopHit;
-(BOOL)isTopHitDueToTriggerMatch;
@end

