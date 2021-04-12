/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <HomeSharing/HSRequest.h>

@interface HSPlaybackControlRequest : HSRequest {

	unsigned _interfaceID;
	long long _controlCommand;

}

@property (nonatomic,readonly) long long controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (nonatomic,readonly) unsigned interfaceID;                  //@synthesize interfaceID=_interfaceID - In the implementation block
-(unsigned)interfaceID;
-(long long)controlCommand;
-(id)initWithInterfaceID:(unsigned)arg1 controlCommand:(long long)arg2 ;
@end

