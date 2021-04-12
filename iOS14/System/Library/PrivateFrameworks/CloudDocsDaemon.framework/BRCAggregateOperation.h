/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)wrapperOperationCompletionHandler;
-(void)setWrapperOperationCompletionHandler:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 subOperations:(id)arg2 ;
@end

