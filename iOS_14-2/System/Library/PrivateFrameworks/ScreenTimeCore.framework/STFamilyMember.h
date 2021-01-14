/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSNumber, NSString;

@interface STFamilyMember : NSObject {

	BOOL _isMe;
	BOOL _isParent;
	BOOL _isOrganizer;
	NSNumber* _DSID;
	NSString* _altDSID;
	NSString* _appleID;
	NSString* _memberType;
	NSString* _firstName;
	NSString* _lastName;

}

@property (assign,nonatomic) BOOL isMe;                                 //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) BOOL isParent;                             //@synthesize isParent=_isParent - In the implementation block
@property (assign,nonatomic) BOOL isOrganizer;                          //@synthesize isOrganizer=_isOrganizer - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * DSID;                    //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                 //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appleID;                 //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * memberType;              //@synthesize memberType=_memberType - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;               //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                //@synthesize lastName=_lastName - In the implementation block
-(BOOL)isMe;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSNumber *)DSID;
-(void)setIsMe:(BOOL)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(NSString *)memberType;
-(BOOL)isOrganizer;
-(NSString *)appleID;
-(void)setIsOrganizer:(BOOL)arg1 ;
-(BOOL)isParent;
-(void)setIsParent:(BOOL)arg1 ;
-(id)initWithDSID:(id)arg1 altDSID:(id)arg2 appleID:(id)arg3 memberType:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 isMe:(BOOL)arg7 isParent:(BOOL)arg8 isOrganizer:(BOOL)arg9 ;
@end

