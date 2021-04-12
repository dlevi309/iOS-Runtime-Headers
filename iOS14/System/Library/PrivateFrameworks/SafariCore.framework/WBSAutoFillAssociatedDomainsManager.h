/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateDomainToDomainsWithAssociatedCredentials;
-(void)_updateDomainToDomainsToConsiderIdentical;
-(id)initWithDomainsWithAssociatedCredentials:(id)arg1 ;
-(id)domainsToConsiderIdenticalToDomain:(id)arg1 ;
-(id)initWithDomainsWithAssociatedCredentials:(id)arg1 domainsToConsiderIdentical:(id)arg2 ;
-(void)setDomainsWithAssociatedCredentials:(NSArray *)arg1 ;
-(void)setDomainsToConsiderIdentical:(NSArray *)arg1 ;
-(NSArray *)domainsWithAssociatedCredentials;
-(NSArray *)domainsToConsiderIdentical;
-(id)domainsWithAssociatedCredentialsForDomain:(id)arg1 ;
@end

