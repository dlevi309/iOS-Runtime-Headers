/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIcon.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SBLeafIconDataSource;
@class NSString, NSMutableSet;

@interface SBLeafIcon : SBIcon <NSCopying> {

	NSString* _leafIdentifier;
	NSString* _applicationBundleID;
	NSMutableSet* _dataSources;
	id<SBLeafIconDataSource> _activeDataSource;
	id<SBLeafIconDataSource> _dataSourceAtUninstallation;

}

@property (nonatomic,copy,readonly) NSString * applicationBundleID; 
@property (nonatomic,copy,readonly) NSString * masqueradeIdentifier; 
@property (nonatomic,readonly) id<SBLeafIconDataSource> activeDataSource; 
+(Class)downloadingIconClass;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationBundleID;
-(id)nodeIdentifier;
-(id<SBLeafIconDataSource>)activeDataSource;
-(BOOL)isTimedOut;
-(long long)progressState;
-(BOOL)isLaunchEnabled;
-(BOOL)isLaunchDisabledForObscuredReason;
-(id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1 ;
-(long long)labelAccessoryType;
-(long long)accessoryTypeForLocation:(id)arg1 ;
-(void)launchFromLocation:(id)arg1 context:(id)arg2 ;
-(BOOL)isProgressPaused;
-(double)progressPercent;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1 ;
-(void)removeIconDataSource:(id)arg1 ;
-(void)addIconDataSource:(id)arg1 ;
-(id)displayNameForLocation:(id)arg1 ;
-(BOOL)isLeafIcon;
-(id)leafIdentifier;
-(void)setUninstalled;
-(void)completeUninstall;
-(id)unmaskedIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)genericIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)_noteActiveDataSourceDidChangeNotification:(id)arg1 ;
-(void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1 ;
-(void)_noteDataSourceDidInvalidateNotification:(id)arg1 ;
-(void)_updateActiveDataSource;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(BOOL)canTruncateLabel;
-(BOOL)canTightenLabel;
-(id)badgeNumberOrString;
-(id)accessoryTextForLocation:(id)arg1 ;
-(NSString *)masqueradeIdentifier;
-(void)removeIconDataSourcesOfClass:(Class)arg1 ;
-(BOOL)isUninstallSupported;
@end

