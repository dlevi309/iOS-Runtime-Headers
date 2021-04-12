/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class ISOperation, NSString;

@interface SUBackgroundTaskOperation : ISOperation {

	ISOperation* _operation;
	NSString* _permissionIdentifier;
	unsigned long long _taskIdentifier;

}

@property (readonly) ISOperation * operation; 
@property (readonly) NSString * permissionIdentifier; 
-(void)dealloc;
-(void)run;
-(ISOperation *)operation;
-(void)_takeBackgroundAssertion;
-(void)_removeBackgroundAssertion;
-(void)_cancelBackgroundAssertion;
-(id)initWithOperation:(id)arg1 identifier:(id)arg2 ;
-(NSString *)permissionIdentifier;
@end

