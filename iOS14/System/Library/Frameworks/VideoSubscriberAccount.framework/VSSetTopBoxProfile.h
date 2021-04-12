/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)providerID;
-(id)description;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(void)setProviderID:(NSString *)arg1 ;
-(BOOL)isDeveloper;
-(id)initWithProviderID:(id)arg1 userToken:(id)arg2 isDeveloper:(BOOL)arg3 ;
-(void)setIsDeveloper:(BOOL)arg1 ;
@end

