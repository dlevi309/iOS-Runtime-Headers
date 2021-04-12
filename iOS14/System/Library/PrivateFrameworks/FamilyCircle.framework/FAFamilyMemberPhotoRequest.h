/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, ACAccount, NSString;

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest {

	NSNumber* _familyMemberDSID;
	ACAccount* _iTunesAccount;
	NSString* _serverCacheTag;

}

@property (nonatomic,copy) NSNumber * familyMemberDSID;                                       //@synthesize familyMemberDSID=_familyMemberDSID - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) ACAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(NSNumber *)familyMemberDSID;
-(void)setFamilyMemberDSID:(NSNumber *)arg1 ;
-(void)setiTunesAccount:(id)arg1 ;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(ACAccount *)iTunesAccount;
-(id)urlRequest;
@end

