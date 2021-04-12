/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSString;

@interface BRCSharingCopyWebAuthTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	NSString* _ckContainerID;

}

@property (nonatomic,retain) NSString * ckContainerID;              //@synthesize ckContainerID=_ckContainerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(NSString *)ckContainerID;
-(id)initWithSyncContext:(id)arg1 ckContainerID:(id)arg2 ;
-(void)setCkContainerID:(NSString *)arg1 ;
@end

