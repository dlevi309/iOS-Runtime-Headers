/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)run;
-(ISOperation *)operation;
-(void)dealloc;
-(void)_takeBackgroundAssertion;
-(void)_removeBackgroundAssertion;
-(void)_cancelBackgroundAssertion;
-(id)initWithOperation:(id)arg1 identifier:(id)arg2 ;
-(NSString *)permissionIdentifier;
@end

