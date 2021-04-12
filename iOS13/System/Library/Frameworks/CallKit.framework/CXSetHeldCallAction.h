/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetHeldCallAction : CXCallAction {

	BOOL _onHold;

}

@property (assign,getter=isOnHold,nonatomic) BOOL onHold;              //@synthesize onHold=_onHold - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)customDescription;
-(BOOL)isOnHold;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)setOnHold:(BOOL)arg1 ;
-(id)initWithCallUUID:(id)arg1 onHold:(BOOL)arg2 ;
@end

