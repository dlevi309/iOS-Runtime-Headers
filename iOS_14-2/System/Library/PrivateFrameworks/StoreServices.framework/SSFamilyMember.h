/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSNumber;

@interface SSFamilyMember : NSObject <SSXPCCoding> {

	BOOL _askToBuy;
	NSString* _firstName;
	NSString* _iCloudAccountName;
	NSNumber* _iCloudIdentifier;
	NSNumber* _iTunesIdentifier;
	NSString* _lastName;
	BOOL _me;
	BOOL _sharingPurchases;

}

@property (nonatomic,retain) NSNumber * iTunesIdentifier;                                  //@synthesize iTunesIdentifier=_iTunesIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * iCloudIdentifier;                                  //@synthesize iCloudIdentifier=_iCloudIdentifier - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                         //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                          //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * iCloudAccountName;                                 //@synthesize iCloudAccountName=_iCloudAccountName - In the implementation block
@property (assign,getter=isMe,nonatomic) BOOL me;                                          //@synthesize me=_me - In the implementation block
@property (assign,getter=isSharingPurchases,nonatomic) BOOL sharingPurchases;              //@synthesize sharingPurchases=_sharingPurchases - In the implementation block
@property (nonatomic,readonly) BOOL askToBuy;                                              //@synthesize askToBuy=_askToBuy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isMe;
-(NSString *)firstName;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)isSharingPurchases;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setMe:(BOOL)arg1 ;
-(BOOL)askToBuy;
-(NSString *)description;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)newCacheRepresentation;
-(NSString *)iCloudAccountName;
-(void)setICloudAccountName:(NSString *)arg1 ;
-(NSNumber *)iCloudIdentifier;
-(void)setICloudIdentifier:(NSNumber *)arg1 ;
-(void)setSharingPurchases:(BOOL)arg1 ;
-(NSNumber *)iTunesIdentifier;
-(void)setITunesIdentifier:(NSNumber *)arg1 ;
@end

