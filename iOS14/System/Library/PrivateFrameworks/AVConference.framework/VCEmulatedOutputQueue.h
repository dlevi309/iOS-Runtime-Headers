/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCEmulatedNetworkElement.h>

@interface VCEmulatedOutputQueue : VCEmulatedNetworkElement {

	unsigned _numberOfPacketsInOutputQueue;

}

@property (nonatomic,readonly) unsigned numberOfPacketsInOutputQueue;              //@synthesize numberOfPacketsInOutputQueue=_numberOfPacketsInOutputQueue - In the implementation block
-(id)copyPacketFromPop;
-(unsigned)numberOfPacketsInOutputQueue;
-(void)runUntilTime:(double)arg1 ;
-(void)connectFrom:(id)arg1 ;
@end

