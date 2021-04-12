/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPOperation.h>

@class CSSearchableIndex, NSString, FPXDomainContext;

@interface FPXDropSpotlightIndexOperation : FPOperation {

	CSSearchableIndex* _index;
	NSString* _reason;
	NSString* _domainID;
	FPXDomainContext* _domainContext;

}
+(void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:(id)arg1 index:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)main;
-(id)operationDescription;
-(id)initWithIndex:(id)arg1 context:(id)arg2 domainID:(id)arg3 reason:(id)arg4 ;
@end

