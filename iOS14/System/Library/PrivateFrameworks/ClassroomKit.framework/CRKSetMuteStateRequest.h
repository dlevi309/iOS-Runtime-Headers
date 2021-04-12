/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKSetMuteStateRequest : CATTaskRequest {

	BOOL _mute;

}

@property (assign,getter=shouldMute,nonatomic) BOOL mute;              //@synthesize mute=_mute - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMute:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldMute;
@end

