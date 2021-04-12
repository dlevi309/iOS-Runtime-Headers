/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSArray, NSMutableArray, NSString;

@interface BRCSharingLookupParticipantsOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	NSArray* _userIdentities;
	NSMutableArray* _shareParticipants;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)createActivity;
-(id)initWithUserIdentities:(id)arg1 session:(id)arg2 ;
@end

