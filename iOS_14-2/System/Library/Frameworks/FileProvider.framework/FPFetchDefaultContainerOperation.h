/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)fetchCompletionBlock;
-(void)actionMain;
-(id)initForApplicationProxy:(id)arg1 providerDomain:(id)arg2 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

