/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKShareMetadata, NSString;

@interface BRCAcceptShareOperation : _BRCOperation <BRCOperationSubclass> {

	CKShareMetadata* _shareMetadata;
	/*^block*/id _acceptShareCompletionBlock;

}

@property (nonatomic,copy) id acceptShareCompletionBlock;              //@synthesize acceptShareCompletionBlock=_acceptShareCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithShareMetadata:(id)arg1 syncContext:(id)arg2 ;
-(void)setAcceptShareCompletionBlock:(id)arg1 ;
-(id)acceptShareCompletionBlock;
@end

