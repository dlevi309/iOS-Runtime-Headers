/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithShareMetadata:(id)arg1 syncContext:(id)arg2 ;
-(void)setAcceptShareCompletionBlock:(id)arg1 ;
-(id)acceptShareCompletionBlock;
@end

