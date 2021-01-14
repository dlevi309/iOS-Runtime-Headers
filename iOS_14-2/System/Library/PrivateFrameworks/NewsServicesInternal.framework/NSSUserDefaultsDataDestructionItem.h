/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)domainName;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)setDomainName:(NSString *)arg1 ;
-(id)initWithUserDefaults:(id)arg1 domainName:(id)arg2 stickyKeys:(id)arg3 ;
-(id)init;
-(void)setStickyKeys:(NSSet *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(NSSet *)stickyKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

