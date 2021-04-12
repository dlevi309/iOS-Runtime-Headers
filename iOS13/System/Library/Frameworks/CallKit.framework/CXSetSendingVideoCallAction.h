/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetSendingVideoCallAction : CXCallAction {

	BOOL _sendingVideo;

}

@property (assign,getter=isSendingVideo,nonatomic) BOOL sendingVideo;              //@synthesize sendingVideo=_sendingVideo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)customDescription;
-(BOOL)isSendingVideo;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(void)setSendingVideo:(BOOL)arg1 ;
-(id)initWithCallUUID:(id)arg1 sendingVideo:(BOOL)arg2 ;
@end

