/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class ICUserIdentity, NSDate;

@interface MPServerObjectDatabaseImportRequest : NSObject {

	id _payload;
	ICUserIdentity* _userIdentity;
	NSDate* _expirationDate;

}

@property (nonatomic,retain) id payload;                                 //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) ICUserIdentity * userIdentity;              //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                      //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)setPayload:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)payload;
-(NSDate *)expirationDate;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(id)_initWithPayload:(id)arg1 ;
@end

