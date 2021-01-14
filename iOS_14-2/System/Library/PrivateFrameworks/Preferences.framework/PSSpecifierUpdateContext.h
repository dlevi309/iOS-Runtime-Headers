/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying> {

	BOOL _animated;
	BOOL _updateModelOnly;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL animated;                      //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL updateModelOnly;               //@synthesize updateModelOnly=_updateModelOnly - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)contextWithUserInfo:(id)arg1 ;
+(id)context;
-(BOOL)animated;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setUpdateModelOnly:(BOOL)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)updateModelOnly;
@end

