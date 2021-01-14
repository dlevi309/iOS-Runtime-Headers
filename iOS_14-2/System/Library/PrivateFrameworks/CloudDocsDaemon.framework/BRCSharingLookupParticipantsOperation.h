/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createActivity;
-(void)main;
-(id)initWithUserIdentities:(id)arg1 session:(id)arg2 ;
@end

