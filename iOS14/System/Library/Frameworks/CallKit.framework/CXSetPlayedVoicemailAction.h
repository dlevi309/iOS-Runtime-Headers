/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXVoicemailAction.h>

@interface CXSetPlayedVoicemailAction : CXVoicemailAction {

	BOOL _played;

}

@property (assign,getter=isPlayed,nonatomic) BOOL played;              //@synthesize played=_played - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(BOOL)isPlayed;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlayed:(BOOL)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)initWithVoicemailUUID:(id)arg1 played:(BOOL)arg2 ;
@end

