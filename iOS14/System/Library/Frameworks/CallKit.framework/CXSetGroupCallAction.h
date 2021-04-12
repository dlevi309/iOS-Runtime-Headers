/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSUUID;

@interface CXSetGroupCallAction : CXCallAction {

	NSUUID* _callUUIDToGroupWith;

}

@property (nonatomic,copy) NSUUID * callUUIDToGroupWith;              //@synthesize callUUIDToGroupWith=_callUUIDToGroupWith - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(NSUUID *)callUUIDToGroupWith;
-(void)setCallUUIDToGroupWith:(NSUUID *)arg1 ;
-(id)initWithCallUUID:(id)arg1 callUUIDToGroupWith:(id)arg2 ;
@end

