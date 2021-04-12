/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class NSString;

@interface MobileCalDAVDelegateUserInfo : NSObject {

	BOOL _allowWrite;
	NSString* _principalPath;
	NSString* _displayName;
	NSString* _uid;

}

@property (nonatomic,retain) NSString * principalPath;              //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,retain) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * uid;                        //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) BOOL allowWrite;                       //@synthesize allowWrite=_allowWrite - In the implementation block
+(id)infoFromCalDAVDetails:(id)arg1 allowWrite:(BOOL)arg2 ;
-(id)description;
-(NSString *)displayName;
-(NSString *)uid;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setUid:(NSString *)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(BOOL)allowWrite;
-(void)setAllowWrite:(BOOL)arg1 ;
-(id)initWithPrincipalPath:(id)arg1 displayName:(id)arg2 allowWrite:(BOOL)arg3 ;
@end

