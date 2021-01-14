/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PHAdjustmentData : NSObject <NSSecureCoding> {

	NSString* _formatIdentifier;
	NSString* _formatVersion;
	NSData* _data;
	long long _baseVersion;

}

@property (getter=isOpaque,readonly) BOOL opaque; 
@property (nonatomic,copy) NSString * formatIdentifier;              //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (nonatomic,copy) NSString * formatVersion;                 //@synthesize formatVersion=_formatVersion - In the implementation block
@property (assign,nonatomic) long long baseVersion;                  //@synthesize baseVersion=_baseVersion - In the implementation block
@property (readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)opaqueAdjustmentData;
+(long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)arg1 ;
+(long long)adjustmentBaseVersionFromImageRequestVersion:(long long)arg1 ;
+(long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)arg1 ;
+(long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)arg1 ;
-(BOOL)isOpaque;
-(void)setFormatVersion:(NSString *)arg1 ;
-(NSString *)formatVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)formatIdentifier;
-(id)description;
-(long long)_contentEditing_requiredBaseVersionReadableByClient:(BOOL*)arg1 verificationBlock:(/*^block*/id)arg2 ;
-(BOOL)_contentEditing_containsValidAdjustment;
-(BOOL)_contentEditing_readableByClientWithVerificationBlock:(/*^block*/id)arg1 ;
-(NSData *)data;
-(id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 ;
-(void)setFormatIdentifier:(NSString *)arg1 ;
-(void)setBaseVersion:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)baseVersion;
-(BOOL)_hasAdjustments;
@end

