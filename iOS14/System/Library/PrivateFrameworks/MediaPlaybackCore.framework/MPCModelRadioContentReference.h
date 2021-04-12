/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRadioContentReference, MPIdentifierSet;

@interface MPCModelRadioContentReference : NSObject <NSCopying, NSSecureCoding> {

	ICRadioContentReference* _ICRadioContentReference;
	MPIdentifierSet* _referenceModelObjectIdentifiers;

}

@property (nonatomic,readonly) ICRadioContentReference * ICRadioContentReference;              //@synthesize ICRadioContentReference=_ICRadioContentReference - In the implementation block
@property (nonatomic,readonly) MPIdentifierSet * referenceModelObjectIdentifiers;              //@synthesize referenceModelObjectIdentifiers=_referenceModelObjectIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referenceWithMPModelObject:(id)arg1 ;
+(id)referenceWithMPModelObject:(id)arg1 containerModelPlayEvent:(id)arg2 ;
+(id)referenceWithStoreIdentifier:(id)arg1 trackInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICRadioContentReference *)ICRadioContentReference;
-(id)initWithICRadioContentReference:(id)arg1 ;
-(MPIdentifierSet *)referenceModelObjectIdentifiers;
@end

