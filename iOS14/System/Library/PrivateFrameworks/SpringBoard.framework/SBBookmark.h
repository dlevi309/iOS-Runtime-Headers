/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBLeafIconDataSource.h>

@class UIWebClip, NSString, NSURL;

@interface SBBookmark : NSObject <SBLeafIconDataSource> {

	UIWebClip* _webClip;

}

@property (nonatomic,readonly) UIWebClip * webClip;                                         //@synthesize webClip=_webClip - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * launchURL; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * configurationStorageIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bookmarkWithWebClip:(id)arg1 ;
-(unsigned long long)supportedGridSizeClassesForIcon:(id)arg1 ;
-(id)icon:(id)arg1 unmaskedImageWithInfo:(SBIconImageInfo)arg2 ;
-(UIWebClip *)webClip;
-(BOOL)isTimedOutForIcon:(id)arg1 ;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(BOOL)isUninstallSupported;
-(NSURL *)launchURL;
-(NSString *)identifier;
-(BOOL)iconSupportsUninstall:(id)arg1 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(void)dealloc;
-(id)initWithWebClip:(id)arg1 ;
-(void)_deviceUnlockedForFirstTime:(id)arg1 ;
@end

