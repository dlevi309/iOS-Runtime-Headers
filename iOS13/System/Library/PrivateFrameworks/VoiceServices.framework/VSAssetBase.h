/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface VSAssetBase : NSObject <NSSecureCoding> {

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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)compatibilityVersion;
-(void)setCompatibilityVersion:(NSNumber *)arg1 ;
-(NSNumber *)contentVersion;
-(NSString *)masteredVersion;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(void)setContentVersion:(NSNumber *)arg1 ;
@end

