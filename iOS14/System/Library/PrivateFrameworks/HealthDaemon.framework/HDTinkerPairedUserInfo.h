/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSNumber;

@interface HDTinkerPairedUserInfo : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSNumber* _dsid;

}

@property (nonatomic,retain) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSNumber * dsid;                   //@synthesize dsid=_dsid - In the implementation block
-(NSString *)firstName;
-(NSString *)lastName;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end

