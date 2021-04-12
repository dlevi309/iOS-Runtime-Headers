/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKRecordID, NSString, NSError;

@interface BRCSharingCopyParticipantTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	CKRecordID* _shareID;
	CKRecordID* _contentRecordID;
	NSString* _participantKey;
	NSString* _baseToken;
	NSError* _error;
	BOOL _iWorkShareable;
	BOOL _isChildOfShare;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createActivity;
-(void)main;
-(id)initWithItem:(id)arg1 ;
-(void)_fetchBaseTokenWithCompletion:(/*^block*/id)arg1 ;
@end

