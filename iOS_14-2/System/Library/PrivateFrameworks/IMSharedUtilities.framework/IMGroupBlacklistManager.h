/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSDate;

@interface IMGroupBlacklistManager : NSObject {

	NSDate* _lastModifiedDate;

}

@property (retain) NSDate * lastModifiedDate;              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(id)sharedInstance;
+(id)groupsBlacklistFilename;
-(void)reloadIfNeeded;
-(id)init;
-(void)save;
-(NSDate *)lastModifiedDate;
-(id)initFromFile:(id)arg1 ;
-(BOOL)isFeatureDisabled;
-(void)_updateLastModifiedDate:(id)arg1 ;
-(BOOL)hasFileChanged;
-(void)blacklistGroupId:(id)arg1 ;
-(BOOL)isGroupInBlacklist:(id)arg1 ;
-(void)loadData;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)loadFromFile:(id)arg1 ;
@end

