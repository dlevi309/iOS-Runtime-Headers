/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INIntent, NSURL, NSUserActivity;

@interface SGSuggestedEventLaunchInfo : NSObject <NSSecureCoding> {

	NSString* _localizedShowInString;
	NSString* _userActivityString;
	NSString* _bundleId;
	INIntent* _intent;
	NSURL* _sourceURL;

}

@property (nonatomic,retain) NSString * userActivityString;                   //@synthesize userActivityString=_userActivityString - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                           //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (nonatomic,readonly) INIntent * intent;                             //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSURL * sourceURL;                             //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) NSString * localizedShowInString;              //@synthesize localizedShowInString=_localizedShowInString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUserActivity *)userActivity;
-(INIntent *)intent;
-(NSURL *)sourceURL;
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedShowInString;
-(NSString *)userActivityString;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserActivityString:(NSString *)arg1 ;
-(id)initWithBundleId:(id)arg1 localizedShowInString:(id)arg2 userActivity:(id)arg3 intent:(id)arg4 sourceURL:(id)arg5 ;
@end

