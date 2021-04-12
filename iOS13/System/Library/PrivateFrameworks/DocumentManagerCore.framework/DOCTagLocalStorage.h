/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/


@class NSUserDefaults, NSOrderedSet;

@interface DOCTagLocalStorage : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (assign,nonatomic) long long tagSerialNumber; 
@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSOrderedSet * userTags; 
@property (nonatomic,retain) NSOrderedSet * discoveredTags; 
+(id)sharedAppGroupStorage;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)setUserTags:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)userTags;
-(NSOrderedSet *)discoveredTags;
-(long long)tagSerialNumber;
-(void)setTagSerialNumber:(long long)arg1 ;
-(void)setDiscoveredTags:(NSOrderedSet *)arg1 ;
-(id)_unarchivedTagsFromData:(id)arg1 ;
@end

