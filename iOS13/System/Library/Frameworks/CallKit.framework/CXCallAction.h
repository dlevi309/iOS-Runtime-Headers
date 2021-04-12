/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)customDescription;
-(NSUUID *)callUUID;
-(void)setCallUUID:(NSUUID *)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCallUUID:(id)arg1 ;
@end

