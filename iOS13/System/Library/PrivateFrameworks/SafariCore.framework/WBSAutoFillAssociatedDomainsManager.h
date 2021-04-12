/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray;

@interface WBSAutoFillAssociatedDomainsManager : NSObject {

	NSMutableDictionary* _domainToDomainsWithAssociatedCredentials;
	NSMutableDictionary* _domainsToDomainsToConsiderIdentical;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSArray* _domainsWithAssociatedCredentials;
	NSArray* _domainsToConsiderIdentical;

}

@property (nonatomic,copy) NSArray * domainsWithAssociatedCredentials;              //@synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials - In the implementation block
@property (nonatomic,copy) NSArray * domainsToConsiderIdentical;                    //@synthesize domainsToConsiderIdentical=_domainsToConsiderIdentical - In the implementation block
-(id)init;
-(id)domainsWithAssociatedCredentialsForDomain:(id)arg1 ;
-(NSArray *)domainsWithAssociatedCredentials;
-(NSArray *)domainsToConsiderIdentical;
-(id)initWithDomainsWithAssociatedCredentials:(id)arg1 domainsToConsiderIdentical:(id)arg2 ;
-(void)setDomainsWithAssociatedCredentials:(NSArray *)arg1 ;
-(void)setDomainsToConsiderIdentical:(NSArray *)arg1 ;
-(void)_updateDomainToDomainsWithAssociatedCredentials;
-(void)_updateDomainToDomainsToConsiderIdentical;
-(id)initWithDomainsWithAssociatedCredentials:(id)arg1 ;
-(id)domainsToConsiderIdenticalToDomain:(id)arg1 ;
@end

