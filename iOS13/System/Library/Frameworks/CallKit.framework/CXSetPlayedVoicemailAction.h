/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXVoicemailAction.h>

@interface CXSetPlayedVoicemailAction : CXVoicemailAction {

	BOOL _played;

}

@property (assign,getter=isPlayed,nonatomic) BOOL played;              //@synthesize played=_played - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPlayed;
-(id)customDescription;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)setPlayed:(BOOL)arg1 ;
-(id)initWithVoicemailUUID:(id)arg1 played:(BOOL)arg2 ;
@end

