/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)block;
-(REMUserDefaults *)userDefaults;
-(void)setBlock:(id)arg1 ;
-(void)stopObserving;
-(void)setUserDefaults:(REMUserDefaults *)arg1 ;
-(void)setRemoved:(BOOL)arg1 ;
-(id)initWithUserDefaults:(id)arg1 key:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSString *)userDefaultsKey;
-(BOOL)removed;
-(void)setUserDefaultsKey:(NSString *)arg1 ;
@end

