/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXAction.h>

@class NSUUID;

@interface CXCallAction : CXAction {

	NSUUID* _callUUID;

}

@property (nonatomic,copy) NSUUID * callUUID;              //@synthesize callUUID=_callUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setCallUUID:(NSUUID *)arg1 ;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)callUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCallUUID:(id)arg1 ;
@end

