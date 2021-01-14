/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitorPrivate.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface CNChangeHistoryTriageLogger : NSObject <CNChangeHistoryEventVisitorPrivate> {

	unsigned char _defaultLogType;
	unsigned char _destructiveLogType;
	NSObject*<OS_os_log> _os_log;

}

@property (readonly) NSObject*<OS_os_log> os_log;                   //@synthesize os_log=_os_log - In the implementation block
@property (readonly) unsigned char defaultLogType;                  //@synthesize defaultLogType=_defaultLogType - In the implementation block
@property (readonly) unsigned char destructiveLogType;              //@synthesize destructiveLogType=_destructiveLogType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)fetchLogger;
+(id)saveLogger;
-(id)init;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitAddGroupEvent:(id)arg1 ;
-(void)visitUpdateGroupEvent:(id)arg1 ;
-(void)visitDeleteGroupEvent:(id)arg1 ;
-(void)visitAddMemberToGroupEvent:(id)arg1 ;
-(void)visitRemoveMemberFromGroupEvent:(id)arg1 ;
-(void)visitAddSubgroupToGroupEvent:(id)arg1 ;
-(void)visitRemoveSubgroupFromGroupEvent:(id)arg1 ;
-(void)visitLinkContactsEvent:(id)arg1 ;
-(void)visitUnlinkContactEvent:(id)arg1 ;
-(void)visitPreferredContactForNameEvent:(id)arg1 ;
-(void)visitPreferredContactForImageEvent:(id)arg1 ;
-(void)visitDifferentMeCardEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(NSObject*<OS_os_log>)os_log;
-(unsigned char)defaultLogType;
-(id)initWithOSLog:(id)arg1 defaultLogType:(unsigned char)arg2 destructiveLogType:(unsigned char)arg3 ;
-(void)willExecuteSaveRequest;
-(void)didExecuteSaveRequest;
-(void)willFetchHistoryWithRequest:(id)arg1 ;
-(void)didFetchHistoryEvents:(id)arg1 anchor:(id)arg2 ;
-(void)fetchDidFailWithError:(id)arg1 ;
-(unsigned char)destructiveLogType;
-(void)fetchDidFailToTranslateWithError:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
@end

