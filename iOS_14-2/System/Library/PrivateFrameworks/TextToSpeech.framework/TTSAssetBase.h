/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface TTSAssetBase : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSNumber* _compatibilityVersion;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,copy) NSNumber * contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,copy) NSString * masteredVersion;                   //@synthesize masteredVersion=_masteredVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)compatibilityVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)masteredVersion;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentVersion:(NSNumber *)arg1 ;
-(NSNumber *)contentVersion;
-(void)setCompatibilityVersion:(NSNumber *)arg1 ;
@end

