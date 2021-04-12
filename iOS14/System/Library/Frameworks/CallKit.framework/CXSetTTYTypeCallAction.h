/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetTTYTypeCallAction : CXCallAction {

	long long _ttyType;

}

@property (assign,nonatomic) long long ttyType;              //@synthesize ttyType=_ttyType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTtyType:(long long)arg1 ;
-(long long)ttyType;
-(id)initWithCoder:(id)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCallUUID:(id)arg1 ttyType:(long long)arg2 ;
@end

