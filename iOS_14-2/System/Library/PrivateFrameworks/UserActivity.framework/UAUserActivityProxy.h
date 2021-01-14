/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUserActivity, UABestAppSuggestion;

@interface UAUserActivityProxy : NSObject <NSSecureCoding> {

	BOOL _isRemoteActivity;
	NSString* _activityType;
	NSString* _bundleId;
	NSUserActivity* _internalActivity;
	UABestAppSuggestion* _suggestedActivity;
	unsigned long long _hashValue;

}

@property (retain) NSUserActivity * internalActivity;                    //@synthesize internalActivity=_internalActivity - In the implementation block
@property (retain) UABestAppSuggestion * suggestedActivity;              //@synthesize suggestedActivity=_suggestedActivity - In the implementation block
@property (assign) unsigned long long hashValue;                         //@synthesize hashValue=_hashValue - In the implementation block
@property (readonly) NSString * activityType;                            //@synthesize activityType=_activityType - In the implementation block
@property (readonly) NSString * bundleId;                                //@synthesize bundleId=_bundleId - In the implementation block
@property (readonly) BOOL isRemoteActivity;                              //@synthesize isRemoteActivity=_isRemoteActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)activityType;
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)contentAttributeSet;
-(id)description;
-(unsigned long long)hashValue;
-(void)setHashValue:(unsigned long long)arg1 ;
-(void)setInternalActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)internalActivity;
-(void)setSuggestedActivity:(UABestAppSuggestion *)arg1 ;
-(BOOL)isRemoteActivity;
-(UABestAppSuggestion *)suggestedActivity;
-(id)initWithActivity:(id)arg1 bundleId:(id)arg2 ;
-(id)initWithSuggestion:(id)arg1 ;
-(void)accessActivity:(/*^block*/id)arg1 ;
-(void)launchActivityWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)activityIfAvailible;
-(unsigned long long)hash;
-(id)activitySubTitle;
-(id)initWithCoder:(id)arg1 ;
-(id)activityTitle;
@end

