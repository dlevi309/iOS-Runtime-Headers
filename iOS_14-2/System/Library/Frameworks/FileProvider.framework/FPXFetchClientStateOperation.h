/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPOperation.h>

@class CSSearchableIndex, NSString, FPXDomainContext;

@interface FPXFetchClientStateOperation : FPOperation {

	CSSearchableIndex* _index;
	NSString* _indexName;
	NSString* _domainIdentifier;
	NSString* _reason;
	FPXDomainContext* _domainContext;

}
+(id)_currentIndexerVersion;
-(id)initWithIndex:(id)arg1 context:(id)arg2 indexName:(id)arg3 domainID:(id)arg4 reason:(id)arg5 ;
-(void)main;
-(id)operationDescription;
-(void)_handleFetchedClientState:(id)arg1 error:(id)arg2 ;
-(id)_clientStateCurrentVersionIfNeedReset;
-(void)_markClientStateResetDone;
-(void)_fetchClientState;
@end

