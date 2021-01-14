/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDActiveXPCConnectionLogEvent : HMDLogEvent {

	BOOL _activated;
	BOOL _added;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (getter=isActivated,readonly) BOOL activated;              //@synthesize activated=_activated - In the implementation block
@property (readonly) BOOL added;                                     //@synthesize added=_added - In the implementation block
+(id)identifier;
+(id)initWithNewXPCConnectionAdded:(id)arg1 ;
+(id)initWithXPCConnectionRemoved:(id)arg1 ;
-(BOOL)added;
-(NSString *)name;
-(BOOL)isActivated;
-(id)initWithXPCConnection:(id)arg1 added:(BOOL)arg2 ;
@end

