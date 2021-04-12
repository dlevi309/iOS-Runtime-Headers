/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface VSAssetBase : NSObject <NSSecureCoding> {

	BOOL _isPurgeable;
	NSString* _bundleIdentifier;
	NSNumber* _compatibilityVersion;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;
	NSNumber* _downloadSize;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,copy) NSNumber * contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,copy) NSString * masteredVersion;                   //@synthesize masteredVersion=_masteredVersion - In the implementation block
@property (nonatomic,copy) NSNumber * downloadSize;                      //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) BOOL isPurgeable;                           //@synthesize isPurgeable=_isPurgeable - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)compatibilityVersion;
-(NSNumber *)downloadSize;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setDownloadSize:(NSNumber *)arg1 ;
-(NSString *)masteredVersion;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentVersion:(NSNumber *)arg1 ;
-(NSNumber *)contentVersion;
-(void)setCompatibilityVersion:(NSNumber *)arg1 ;
-(BOOL)isPurgeable;
-(void)setIsPurgeable:(BOOL)arg1 ;
@end

