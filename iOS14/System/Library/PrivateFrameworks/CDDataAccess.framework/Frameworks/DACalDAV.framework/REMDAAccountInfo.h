/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

#import <libobjc.A.dylib/REMDAAccountProviding.h>

@class NSString, REMObjectID;

@interface REMDAAccountInfo : NSObject <REMDAAccountProviding> {

	NSString* _accountID;
	REMObjectID* _rem_accountObjectID;
	NSString* _accountDescription;

}

@property (nonatomic,retain) NSString * accountID;                           //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) REMObjectID * rem_accountObjectID;              //@synthesize rem_accountObjectID=_rem_accountObjectID - In the implementation block
@property (nonatomic,retain) NSString * accountDescription;                  //@synthesize accountDescription=_accountDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)accountDescription;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(id)loggingDescription;
-(REMObjectID *)rem_accountObjectID;
-(id)initWithAccountID:(id)arg1 remAccountObjectID:(id)arg2 accountDescription:(id)arg3 ;
-(void)setRem_accountObjectID:(REMObjectID *)arg1 ;
@end

