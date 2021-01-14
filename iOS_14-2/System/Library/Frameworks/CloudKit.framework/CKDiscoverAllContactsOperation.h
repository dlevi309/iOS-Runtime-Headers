/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@interface CKDiscoverAllContactsOperation : CKOperation {

	/*^block*/id _discoverAllContactsCompletionBlock;

}

@property (nonatomic,copy) id discoverAllContactsCompletionBlock;              //@synthesize discoverAllContactsCompletionBlock=_discoverAllContactsCompletionBlock - In the implementation block
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(id)discoverAllContactsCompletionBlock;
-(void)setDiscoverAllContactsCompletionBlock:(id)arg1 ;
@end

