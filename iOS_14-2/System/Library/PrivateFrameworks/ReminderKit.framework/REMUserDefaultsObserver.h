/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMUserDefaultsObserveToken.h>

@class REMUserDefaults, NSString;

@interface REMUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken> {

	BOOL _removed;
	REMUserDefaults* _userDefaults;
	NSString* _userDefaultsKey;
	/*^block*/id _block;

}

@property (nonatomic,retain) REMUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy) NSString * userDefaultsKey;                    //@synthesize userDefaultsKey=_userDefaultsKey - In the implementation block
@property (nonatomic,copy) id block;                                      //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL removed;                                //@synthesize removed=_removed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopObserving;
-(void)setRemoved:(BOOL)arg1 ;
-(void)setUserDefaults:(REMUserDefaults *)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSString *)userDefaultsKey;
-(void)setUserDefaultsKey:(NSString *)arg1 ;
-(BOOL)removed;
-(REMUserDefaults *)userDefaults;
-(id)initWithUserDefaults:(id)arg1 key:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

