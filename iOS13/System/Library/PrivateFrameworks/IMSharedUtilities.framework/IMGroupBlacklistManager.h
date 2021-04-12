/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSDate;

@interface IMGroupBlacklistManager : NSObject {

	NSDate* _lastModifiedDate;

}

@property (retain) NSDate * lastModifiedDate;              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(id)sharedInstance;
+(id)groupsBlacklistFilename;
-(id)init;
-(void)save;
-(void)loadData;
-(NSDate *)lastModifiedDate;
-(id)initFromFile:(id)arg1 ;
-(void)loadFromFile:(id)arg1 ;
-(BOOL)isFeatureDisabled;
-(void)reloadIfNeeded;
-(void)_updateLastModifiedDate:(id)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(BOOL)hasFileChanged;
-(void)blacklistGroupId:(id)arg1 ;
-(BOOL)isGroupInBlacklist:(id)arg1 ;
@end

