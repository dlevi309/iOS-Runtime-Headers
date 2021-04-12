/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)resultType;
-(NSString *)displayName;
-(void)setResultType:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)emailAddress;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(id)initWithResponse:(id)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(NSArray *)cuAddresses;
-(id)convertToDAContactSearchResultElement;
-(NSString *)preferredCUAddress;
-(void)setMCUAddresses:(NSMutableArray *)arg1 ;
-(void)setMEmailAddresses:(NSMutableArray *)arg1 ;
-(void)addEmail:(id)arg1 ;
-(void)addCUAddress:(id)arg1 ;
-(NSMutableArray *)mCUAddresses;
-(NSMutableArray *)mEmailAddresses;
@end

