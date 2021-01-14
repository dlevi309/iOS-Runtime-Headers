/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PURemotePasscodePolicy : NSObject <NSSecureCoding> {

	BOOL _modificationAllowed;
	unsigned long long _passcodeMinimumLength;

}

@property (assign,getter=isModificationAllowed,nonatomic) BOOL modificationAllowed;              //@synthesize modificationAllowed=_modificationAllowed - In the implementation block
@property (assign,nonatomic) unsigned long long passcodeMinimumLength;                           //@synthesize passcodeMinimumLength=_passcodeMinimumLength - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isModificationAllowed;
-(unsigned long long)passcodeMinimumLength;
-(void)setModificationAllowed:(BOOL)arg1 ;
-(void)setPasscodeMinimumLength:(unsigned long long)arg1 ;
@end

