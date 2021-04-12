/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AKDeveloperTeam : NSObject <NSSecureCoding> {

	NSString* _userIdentifier;
	NSString* _teamID;
	NSString* _privateEmail;
	NSDictionary* _apps;

}

@property (nonatomic,copy) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamID;                      //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * privateEmail;                //@synthesize privateEmail=_privateEmail - In the implementation block
@property (nonatomic,copy) NSDictionary * apps;                    //@synthesize apps=_apps - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)teamID;
-(void)setApps:(NSDictionary *)arg1 ;
-(NSString *)userIdentifier;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)privateEmail;
-(void)setPrivateEmail:(NSString *)arg1 ;
-(NSDictionary *)apps;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(id)initWithResponseInfo:(id)arg1 ;
@end

