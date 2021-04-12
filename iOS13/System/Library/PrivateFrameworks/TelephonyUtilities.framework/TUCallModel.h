/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TUCallModel : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsHolding;
	BOOL _supportsGrouping;
	BOOL _supportsUngrouping;
	BOOL _supportsDTMF;
	BOOL _supportsUnambiguousMultiPartyState;
	BOOL _supportsAddCall;
	BOOL _supportsSendingToVoicemail;

}

@property (assign,nonatomic) BOOL supportsHolding;                                 //@synthesize supportsHolding=_supportsHolding - In the implementation block
@property (assign,nonatomic) BOOL supportsGrouping;                                //@synthesize supportsGrouping=_supportsGrouping - In the implementation block
@property (assign,nonatomic) BOOL supportsUngrouping;                              //@synthesize supportsUngrouping=_supportsUngrouping - In the implementation block
@property (assign,nonatomic) BOOL supportsDTMF;                                    //@synthesize supportsDTMF=_supportsDTMF - In the implementation block
@property (assign,nonatomic) BOOL supportsUnambiguousMultiPartyState;              //@synthesize supportsUnambiguousMultiPartyState=_supportsUnambiguousMultiPartyState - In the implementation block
@property (assign,nonatomic) BOOL supportsAddCall;                                 //@synthesize supportsAddCall=_supportsAddCall - In the implementation block
@property (assign,nonatomic) BOOL supportsSendingToVoicemail;                      //@synthesize supportsSendingToVoicemail=_supportsSendingToVoicemail - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsGrouping;
-(BOOL)supportsHolding;
-(BOOL)supportsUngrouping;
-(BOOL)supportsDTMF;
-(BOOL)supportsUnambiguousMultiPartyState;
-(BOOL)supportsAddCall;
-(BOOL)supportsSendingToVoicemail;
-(void)setSupportsHolding:(BOOL)arg1 ;
-(void)setSupportsGrouping:(BOOL)arg1 ;
-(void)setSupportsUngrouping:(BOOL)arg1 ;
-(void)setSupportsDTMF:(BOOL)arg1 ;
-(void)setSupportsUnambiguousMultiPartyState:(BOOL)arg1 ;
-(void)setSupportsAddCall:(BOOL)arg1 ;
-(void)setSupportsSendingToVoicemail:(BOOL)arg1 ;
@end

