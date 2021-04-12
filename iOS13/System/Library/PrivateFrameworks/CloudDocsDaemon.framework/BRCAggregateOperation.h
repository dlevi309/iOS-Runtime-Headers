/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSArray, NSMutableDictionary, NSString;

@interface BRCAggregateOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	NSArray* _subOperations;
	NSMutableDictionary* _resultDictionary;
	/*^block*/id _wrapperOperationCompletionHandler;

}

@property (nonatomic,copy) id wrapperOperationCompletionHandler;              //@synthesize wrapperOperationCompletionHandler=_wrapperOperationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)wrapperOperationCompletionHandler;
-(void)setWrapperOperationCompletionHandler:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 subOperations:(id)arg2 ;
@end

