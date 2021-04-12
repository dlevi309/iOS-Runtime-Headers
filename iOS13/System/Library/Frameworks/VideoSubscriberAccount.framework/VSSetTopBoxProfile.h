/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSString;

@interface VSSetTopBoxProfile : NSObject {

	BOOL _isDeveloper;
	NSString* _providerID;
	NSString* _userToken;

}

@property (nonatomic,retain) NSString * providerID;              //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,retain) NSString * userToken;               //@synthesize userToken=_userToken - In the implementation block
@property (assign,nonatomic) BOOL isDeveloper;                   //@synthesize isDeveloper=_isDeveloper - In the implementation block
-(id)description;
-(NSString *)providerID;
-(void)setProviderID:(NSString *)arg1 ;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(BOOL)isDeveloper;
-(id)initWithProviderID:(id)arg1 userToken:(id)arg2 isDeveloper:(BOOL)arg3 ;
-(void)setIsDeveloper:(BOOL)arg1 ;
@end

