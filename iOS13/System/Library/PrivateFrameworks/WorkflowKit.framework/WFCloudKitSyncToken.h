/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRecord.h>

@class NSString, NSDate, NSData, CKServerChangeToken, NSOrderedSet;

@interface WFCloudKitSyncToken : WFRecord {

	NSString* _identifier;
	NSString* _account;
	NSDate* _date;
	NSData* _serverChangeTokenData;
	NSData* _lastOrderingData;

}

@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * account;                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSData * serverChangeTokenData;                         //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (nonatomic,copy) NSData * lastOrderingData;                              //@synthesize lastOrderingData=_lastOrderingData - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken; 
@property (nonatomic,copy) NSOrderedSet * lastOrdering; 
+(id)defaultPropertyValues;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setLastOrdering:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)lastOrdering;
-(NSData *)serverChangeTokenData;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(NSData *)lastOrderingData;
-(void)setLastOrderingData:(NSData *)arg1 ;
@end

