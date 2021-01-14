/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationCredentialStateRequest : NSObject <NSSecureCoding> {

	BOOL _shouldIgnoreUserID;
	BOOL _shouldIgnoreTeamID;
	NSString* _userID;
	NSString* _teamID;
	NSString* _clientID;
	NSString* _altDSID;

}

@property (nonatomic,copy) NSString * teamID;                      //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * clientID;                    //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                     //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreUserID;              //@synthesize shouldIgnoreUserID=_shouldIgnoreUserID - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreTeamID;              //@synthesize shouldIgnoreTeamID=_shouldIgnoreTeamID - In the implementation block
@property (nonatomic,copy) NSString * userID;                      //@synthesize userID=_userID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)teamID;
-(void)setUserID:(NSString *)arg1 ;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)userID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(BOOL)shouldIgnoreUserID;
-(void)setShouldIgnoreUserID:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTeamID;
-(void)setShouldIgnoreTeamID:(BOOL)arg1 ;
@end

