/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXCMMComposeRecipient, NSString;

@interface PXCMMComposeRecipientValidationQuery : NSObject <NSCopying> {

	PXCMMComposeRecipient* _composeRecipient;
	NSString* _address;
	long long _addressKind;
	long long _validationType;

}

@property (nonatomic,readonly) PXCMMComposeRecipient * composeRecipient;              //@synthesize composeRecipient=_composeRecipient - In the implementation block
@property (nonatomic,copy,readonly) NSString * address;                               //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) long long addressKind;                                 //@synthesize addressKind=_addressKind - In the implementation block
@property (assign,nonatomic) long long validationType;                                //@synthesize validationType=_validationType - In the implementation block
+(id)new;
-(id)init;
-(id)initWithComposeRecipient:(id)arg1 address:(id)arg2 addressKind:(long long)arg3 ;
-(PXCMMComposeRecipient *)composeRecipient;
-(long long)validationType;
-(void)setValidationType:(long long)arg1 ;
-(id)description;
-(NSString *)address;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)addressKind;
-(BOOL)isEqual:(id)arg1 ;
@end

