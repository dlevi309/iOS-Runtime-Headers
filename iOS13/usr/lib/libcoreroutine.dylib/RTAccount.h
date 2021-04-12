/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class NSString, NSArray;

@interface RTAccount : NSObject {

	BOOL _primaryEmailVerified;
	NSString* _dsid;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _appleID;
	NSString* _altDSID;
	NSString* _primaryEmail;
	NSString* _appleIDAlias;
	NSArray* _appleIDAliases;

}

@property (nonatomic,retain) NSString * dsid;                        //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                    //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) BOOL primaryEmailVerified;              //@synthesize primaryEmailVerified=_primaryEmailVerified - In the implementation block
@property (nonatomic,retain) NSString * appleID;                     //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                     //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * primaryEmail;                //@synthesize primaryEmail=_primaryEmail - In the implementation block
@property (nonatomic,retain) NSString * appleIDAlias;                //@synthesize appleIDAlias=_appleIDAlias - In the implementation block
@property (nonatomic,retain) NSArray * appleIDAliases;               //@synthesize appleIDAliases=_appleIDAliases - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)description;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)appleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSArray *)appleIDAliases;
-(NSString *)primaryEmail;
-(BOOL)primaryEmailVerified;
-(id)initWithACAccount:(id)arg1 ;
-(id)appleIDs;
-(void)setPrimaryEmail:(NSString *)arg1 ;
-(void)setPrimaryEmailVerified:(BOOL)arg1 ;
-(void)setAppleIDAlias:(NSString *)arg1 ;
-(void)setAppleIDAliases:(NSArray *)arg1 ;
-(NSString *)appleIDAlias;
@end

