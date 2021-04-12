/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setModificationAllowed:(BOOL)arg1 ;
-(BOOL)isModificationAllowed;
-(unsigned long long)passcodeMinimumLength;
-(void)setPasscodeMinimumLength:(unsigned long long)arg1 ;
@end

