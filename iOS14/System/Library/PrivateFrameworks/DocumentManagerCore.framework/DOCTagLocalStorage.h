/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(void)setUserTags:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)userTags;
-(NSOrderedSet *)discoveredTags;
-(long long)tagSerialNumber;
-(void)setTagSerialNumber:(long long)arg1 ;
-(void)setDiscoveredTags:(NSOrderedSet *)arg1 ;
-(id)_unarchivedTagsFromData:(id)arg1 ;
@end

