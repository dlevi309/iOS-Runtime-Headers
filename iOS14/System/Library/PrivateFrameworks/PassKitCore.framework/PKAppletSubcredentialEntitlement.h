/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKAppletSubcredentialEntitlement : NSObject <NSSecureCoding, NSCopying> {

	BOOL _nativelySupported;
	unsigned long long _value;
	NSString* _descriptionKey;
	NSString* _longDescriptionKey;

}

@property (assign,nonatomic) unsigned long long value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * descriptionKey;                                        //@synthesize descriptionKey=_descriptionKey - In the implementation block
@property (nonatomic,copy) NSString * longDescriptionKey;                                    //@synthesize longDescriptionKey=_longDescriptionKey - In the implementation block
@property (assign,getter=isNativelySupported,nonatomic) BOOL nativelySupported;              //@synthesize nativelySupported=_nativelySupported - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(unsigned long long)arg1 ;
-(id)description;
-(id)localizedDescriptionWithPass:(id)arg1 ;
-(NSString *)longDescriptionKey;
-(id)defaultDescription;
-(id)initWithCoder:(id)arg1 ;
-(id)defaultLongDescription;
-(id)localizedLongDescriptionWithPass:(id)arg1 ;
-(void)setDescriptionKey:(NSString *)arg1 ;
-(void)setLongDescriptionKey:(NSString *)arg1 ;
-(BOOL)isNativelySupported;
-(void)setNativelySupported:(BOOL)arg1 ;
-(NSString *)descriptionKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
@end

