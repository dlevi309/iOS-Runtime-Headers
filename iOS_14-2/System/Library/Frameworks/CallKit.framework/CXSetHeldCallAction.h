/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetHeldCallAction : CXCallAction {

	BOOL _onHold;

}

@property (assign,getter=isOnHold,nonatomic) BOOL onHold;              //@synthesize onHold=_onHold - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOnHold:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isOnHold;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)initWithCallUUID:(id)arg1 onHold:(BOOL)arg2 ;
@end

