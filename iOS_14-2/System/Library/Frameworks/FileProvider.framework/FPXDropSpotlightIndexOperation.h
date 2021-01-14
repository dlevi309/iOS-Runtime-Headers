/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithIndex:(id)arg1 context:(id)arg2 domainID:(id)arg3 reason:(id)arg4 ;
-(void)main;
-(id)operationDescription;
@end

