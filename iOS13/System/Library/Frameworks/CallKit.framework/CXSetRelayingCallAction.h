/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetRelayingCallAction : CXCallAction {

	BOOL _relaying;

}

@property (assign,getter=isRelaying,nonatomic) BOOL relaying;              //@synthesize relaying=_relaying - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)customDescription;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isRelaying;
-(void)setRelaying:(BOOL)arg1 ;
-(id)initWithCallUUID:(id)arg1 relaying:(BOOL)arg2 ;
@end

