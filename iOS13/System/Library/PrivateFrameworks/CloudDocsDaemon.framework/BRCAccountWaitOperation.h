/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol OS_dispatch_source;
@class NSObject, CKContainer, NSString;

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {

	NSObject*<OS_dispatch_source> _source;
	CKContainer* _ckContainer;
	long long _lastAccountStatus;
	BOOL _resumed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_accountDidChange;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(void)_accountChangeHandler;
-(id)descriptionForCKAccountStatus:(long long)arg1 dumpContext:(id)arg2 ;
-(id)initWithCKContainer:(id)arg1 ;
@end

