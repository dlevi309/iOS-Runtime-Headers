/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleId;
-(INIntent *)intent;
-(NSUserActivity *)userActivity;
-(NSURL *)sourceURL;
-(NSString *)localizedShowInString;
-(NSString *)userActivityString;
-(id)initWithBundleId:(id)arg1 localizedShowInString:(id)arg2 userActivity:(id)arg3 intent:(id)arg4 sourceURL:(id)arg5 ;
-(void)setUserActivityString:(NSString *)arg1 ;
@end

