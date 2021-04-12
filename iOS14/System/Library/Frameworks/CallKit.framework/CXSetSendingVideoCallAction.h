/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetSendingVideoCallAction : CXCallAction {

	BOOL _sendingVideo;

}

@property (assign,getter=isSendingVideo,nonatomic) BOOL sendingVideo;              //@synthesize sendingVideo=_sendingVideo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSendingVideo;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(void)setSendingVideo:(BOOL)arg1 ;
-(id)initWithCallUUID:(id)arg1 sendingVideo:(BOOL)arg2 ;
@end

