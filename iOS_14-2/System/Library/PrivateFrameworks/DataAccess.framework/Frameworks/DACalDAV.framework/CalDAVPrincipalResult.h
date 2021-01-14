/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class NSString, NSArray, NSMutableArray;

@interface CalDAVPrincipalResult : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayName;
	NSString* _resultType;
	NSString* _principalPath;
	NSArray* _emailAddresses;
	NSMutableArray* _mCUAddresses;
	NSMutableArray* _mEmailAddresses;

}

@property (nonatomic,retain) NSMutableArray * mCUAddresses;                 //@synthesize mCUAddresses=_mCUAddresses - In the implementation block
@property (nonatomic,retain) NSMutableArray * mEmailAddresses;              //@synthesize mEmailAddresses=_mEmailAddresses - In the implementation block
@property (nonatomic,retain) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * resultType;                         //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,retain) NSString * principalPath;                      //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,retain) NSArray * emailAddresses;                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * cuAddresses; 
@property (nonatomic,readonly) NSString * preferredCUAddress; 
+(id)resultFromResponse:(id)arg1 ;
-(void)setResultType:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(id)init;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(id)initWithResponse:(id)arg1 ;
-(NSString *)preferredCUAddress;
-(NSArray *)cuAddresses;
-(NSArray *)emailAddresses;
-(NSString *)resultType;
-(id)convertToDAContactSearchResultElement;
-(id)description;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setMCUAddresses:(NSMutableArray *)arg1 ;
-(void)setMEmailAddresses:(NSMutableArray *)arg1 ;
-(void)addEmail:(id)arg1 ;
-(void)addCUAddress:(id)arg1 ;
-(NSMutableArray *)mCUAddresses;
-(NSMutableArray *)mEmailAddresses;
-(NSString *)displayName;
@end

