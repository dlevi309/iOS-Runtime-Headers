/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SBLockScreenPluginAction.h>

@class NSString, NSURL;

@interface SBLockScreenPluginApplicationAction : SBLockScreenPluginAction {

	NSString* _bundleID;
	NSURL* _url;
	unsigned long long _transitionStyle;

}

@property (nonatomic,copy) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (setter=setURL:,nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) unsigned long long transitionStyle;              //@synthesize transitionStyle=_transitionStyle - In the implementation block
+(id)actionWithURL:(id)arg1 ;
+(id)actionWithBundleID:(id)arg1 ;
-(id)succinctDescription;
-(void)setBundleID:(NSString *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(NSURL *)url;
-(id)description;
-(NSString *)bundleID;
-(unsigned long long)transitionStyle;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setTransitionStyle:(unsigned long long)arg1 ;
-(BOOL)isApplicationAction;
@end

