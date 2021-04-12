/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, SSAccount, NSString;

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest {

	NSNumber* _familyMemberDSID;
	SSAccount* _iTunesAccount;
	NSString* _serverCacheTag;

}

@property (nonatomic,copy) NSNumber * familyMemberDSID;                                       //@synthesize familyMemberDSID=_familyMemberDSID - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(SSAccount *)iTunesAccount;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)setiTunesAccount:(id)arg1 ;
-(void)setFamilyMemberDSID:(NSNumber *)arg1 ;
-(NSNumber *)familyMemberDSID;
@end

