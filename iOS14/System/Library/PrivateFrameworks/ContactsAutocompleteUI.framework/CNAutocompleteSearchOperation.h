/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <Foundation/NSOperation.h>

@class CNAutocompleteSearchManager, NSNumber, NSString;

@interface CNAutocompleteSearchOperation : NSOperation {

	CNAutocompleteSearchManager* _owner;
	NSNumber* _taskID;
	NSString* _text;
	NSString* _sendingAddress;

}

@property (nonatomic,readonly) CNAutocompleteSearchManager * owner;              //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSNumber * taskID;                                //@synthesize taskID=_taskID - In the implementation block
@property (nonatomic,readonly) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * sendingAddress;                        //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
+(id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3 ;
-(CNAutocompleteSearchManager *)owner;
-(NSNumber *)taskID;
-(NSString *)sendingAddress;
-(NSString *)text;
-(unsigned long long)type;
@end

