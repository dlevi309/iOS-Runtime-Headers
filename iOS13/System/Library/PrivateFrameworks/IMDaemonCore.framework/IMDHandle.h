/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSString, NSDictionary;

@interface IMDHandle : NSObject {

	NSString* _id;
	NSString* _unformattedID;
	NSString* _countryCode;
	NSString* _personCentricID;
	NSString* _CNContactID;

}

@property (nonatomic,retain) NSString * ID;                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * unformattedID;                        //@synthesize unformattedID=_unformattedID - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * handleInfo; 
@property (nonatomic,retain) NSString * personCentricID;                      //@synthesize personCentricID=_personCentricID - In the implementation block
@property (nonatomic,copy) NSString * CNContactID;                            //@synthesize CNContactID=_CNContactID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setUnformattedID:(NSString *)arg1 ;
-(NSString *)unformattedID;
-(void)setPersonCentricID:(NSString *)arg1 ;
-(NSString *)personCentricID;
-(NSString *)ID;
-(BOOL)isBusiness;
-(long long)compareIDs:(id)arg1 ;
-(void)setID:(NSString *)arg1 ;
-(NSDictionary *)handleInfo;
-(BOOL)isBetterDefinedThan:(id)arg1 ;
-(NSString *)CNContactID;
-(void)setCNContactID:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 personCentricID:(id)arg4 ;
-(id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 ;
@end

