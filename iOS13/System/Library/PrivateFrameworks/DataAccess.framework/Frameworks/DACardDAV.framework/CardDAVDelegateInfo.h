/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/


@class NSString, NSNumber;

@interface CardDAVDelegateInfo : NSObject {

	NSString* _principalPath;
	NSNumber* _dsid;
	NSString* _altDSID;
	NSString* _appleID;

}

@property (nonatomic,retain) NSString * principalPath;              //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,retain) NSNumber * dsid;                       //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                    //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * appleID;                    //@synthesize appleID=_appleID - In the implementation block
+(id)hardCodedPrincipalPathForDSID:(id)arg1 ;
+(id)altDSIDForAccount:(id)arg1 ;
+(id)appleIDForAccount:(id)arg1 ;
+(id)dsidForAccount:(id)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(id)initWithFamilyMember:(id)arg1 ;
-(id)_hardCodedPrincipalPathForFamilyMember:(id)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(void)setPropertiesOnAccount:(id)arg1 ;
@end

