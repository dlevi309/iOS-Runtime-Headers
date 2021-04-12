/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createActivity;
-(void)start;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)_accountDidChange;
-(void)cancel;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(void)_accountChangeHandler;
-(id)descriptionForCKAccountStatus:(long long)arg1 dumpContext:(id)arg2 ;
-(id)initWithCKContainer:(id)arg1 ;
@end

