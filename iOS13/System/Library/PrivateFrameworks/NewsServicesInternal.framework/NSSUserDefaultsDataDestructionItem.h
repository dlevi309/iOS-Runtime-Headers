/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUserDefaults, NSString, NSSet;

@interface NSSUserDefaultsDataDestructionItem : NSObject <NSCopying> {

	NSUserDefaults* _userDefaults;
	NSString* _domainName;
	NSSet* _stickyKeys;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy) NSString * domainName;                        //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,copy) NSSet * stickyKeys;                           //@synthesize stickyKeys=_stickyKeys - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domainName;
-(NSUserDefaults *)userDefaults;
-(void)setDomainName:(NSString *)arg1 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)initWithUserDefaults:(id)arg1 domainName:(id)arg2 stickyKeys:(id)arg3 ;
-(NSSet *)stickyKeys;
-(void)setStickyKeys:(NSSet *)arg1 ;
@end

