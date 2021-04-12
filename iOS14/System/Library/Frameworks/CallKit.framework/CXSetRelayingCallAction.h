/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetRelayingCallAction : CXCallAction {

	BOOL _relaying;

}

@property (assign,getter=isRelaying,nonatomic) BOOL relaying;              //@synthesize relaying=_relaying - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isRelaying;
-(void)setRelaying:(BOOL)arg1 ;
-(id)initWithCallUUID:(id)arg1 relaying:(BOOL)arg2 ;
@end

