/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXAction.h>

@class NSUUID;

@interface CXVoicemailAction : CXAction {

	NSUUID* _voicemailUUID;

}

@property (nonatomic,copy) NSUUID * voicemailUUID;              //@synthesize voicemailUUID=_voicemailUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithVoicemailUUID:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(NSUUID *)voicemailUUID;
-(void)setVoicemailUUID:(NSUUID *)arg1 ;
@end

