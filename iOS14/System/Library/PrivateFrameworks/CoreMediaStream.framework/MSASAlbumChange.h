/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@class NSString, MSASInvitation;

@interface MSASAlbumChange : NSObject {

	BOOL _wasDeleted;
	NSString* _GUID;
	NSString* _ownerEmail;
	NSString* _ownerPersonID;
	NSString* _ownerFullName;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	NSString* _URLString;
	MSASInvitation* _invitation;
	NSString* _name;

}

@property (nonatomic,copy) NSString * ownerEmail;                      //@synthesize ownerEmail=_ownerEmail - In the implementation block
@property (nonatomic,copy) NSString * ownerPersonID;                   //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,copy) NSString * ownerFullName;                   //@synthesize ownerFullName=_ownerFullName - In the implementation block
@property (nonatomic,copy) NSString * ownerFirstName;                  //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,copy) NSString * ownerLastName;                   //@synthesize ownerLastName=_ownerLastName - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;               //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * URLString;                     //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                          //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (nonatomic,retain) MSASInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
-(NSString *)URLString;
-(BOOL)wasDeleted;
-(NSString *)name;
-(id)description;
-(void)setWasDeleted:(BOOL)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setURLString:(NSString *)arg1 ;
-(NSString *)ownerEmail;
-(NSString *)ownerPersonID;
-(NSString *)ownerFullName;
-(NSString *)ownerLastName;
-(NSString *)ownerFirstName;
-(MSASInvitation *)invitation;
-(void)setInvitation:(MSASInvitation *)arg1 ;
-(NSString *)GUID;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(void)setOwnerEmail:(NSString *)arg1 ;
-(void)setOwnerFullName:(NSString *)arg1 ;
-(void)setOwnerFirstName:(NSString *)arg1 ;
-(void)setOwnerLastName:(NSString *)arg1 ;
@end

