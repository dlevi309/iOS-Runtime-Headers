/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying> {

	NSString* _address;
	long long _addressKind;

}

@property (nonatomic,copy,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) long long addressKind;                //@synthesize addressKind=_addressKind - In the implementation block
+(id)new;
-(id)init;
-(id)description;
-(NSString *)address;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddress:(id)arg1 addressKind:(long long)arg2 ;
-(long long)addressKind;
-(BOOL)isEqual:(id)arg1 ;
@end

