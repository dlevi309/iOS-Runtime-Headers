/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFUserItemProvider : HFItemProvider {

	BOOL _includeCurrentUser;
	unsigned long long _nameStyle;
	HMHome* _home;
	NSMutableSet* _userItems;

}

@property (nonatomic,retain) NSMutableSet * userItems;                  //@synthesize userItems=_userItems - In the implementation block
@property (assign,nonatomic) BOOL includeCurrentUser;                   //@synthesize includeCurrentUser=_includeCurrentUser - In the implementation block
@property (assign,nonatomic) unsigned long long nameStyle;              //@synthesize nameStyle=_nameStyle - In the implementation block
@property (nonatomic,readonly) HMHome * home;                           //@synthesize home=_home - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(unsigned long long)nameStyle;
-(BOOL)includeCurrentUser;
-(NSMutableSet *)userItems;
-(void)setIncludeCurrentUser:(BOOL)arg1 ;
-(void)setNameStyle:(unsigned long long)arg1 ;
-(void)setUserItems:(NSMutableSet *)arg1 ;
@end

