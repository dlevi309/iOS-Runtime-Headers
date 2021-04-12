/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBLeafIconDataSource.h>

@class UIWebClip, NSString, NSURL;

@interface SBBookmark : NSObject <SBLeafIconDataSource> {

	UIWebClip* _webClip;

}

@property (nonatomic,readonly) UIWebClip * webClip;                 //@synthesize webClip=_webClip - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * launchURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bookmarkWithWebClip:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSURL *)launchURL;
-(UIWebClip *)webClip;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(id)icon:(id)arg1 unmaskedImageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)iconSupportsUninstall:(id)arg1 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(BOOL)isUninstallSupported;
-(id)initWithWebClip:(id)arg1 ;
-(void)_deviceUnlockedForFirstTime:(id)arg1 ;
@end

