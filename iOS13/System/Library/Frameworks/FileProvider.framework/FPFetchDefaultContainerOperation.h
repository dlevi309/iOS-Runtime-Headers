/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@class NSString;

@interface FPFetchDefaultContainerOperation : FPActionOperation {

	NSString* _defaultName;
	NSString* _appIdentifier;
	NSString* _domainIdentifier;
	/*^block*/id _fetchCompletionBlock;

}

@property (nonatomic,copy) id fetchCompletionBlock;              //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)fetchCompletionBlock;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)actionMain;
-(id)initForApplicationProxy:(id)arg1 providerDomain:(id)arg2 ;
@end

