/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSURL *)url;
-(void)setURL:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setTransitionStyle:(unsigned long long)arg1 ;
-(unsigned long long)transitionStyle;
-(BOOL)isApplicationAction;
@end

