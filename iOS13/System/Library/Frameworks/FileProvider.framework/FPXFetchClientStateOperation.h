/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(id)operationDescription;
-(id)initWithIndex:(id)arg1 context:(id)arg2 indexName:(id)arg3 domainID:(id)arg4 reason:(id)arg5 ;
-(void)_handleFetchedClientState:(id)arg1 error:(id)arg2 ;
-(id)_clientStateCurrentVersionIfNeedReset;
-(void)_markClientStateResetDone;
-(void)_fetchClientState;
@end

