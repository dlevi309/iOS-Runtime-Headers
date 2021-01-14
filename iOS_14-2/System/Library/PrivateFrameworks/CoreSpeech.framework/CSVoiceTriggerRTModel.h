/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CSVoiceTriggerRTModel : NSObject <NSSecureCoding> {

	NSData* _modelData;
	NSString* _modelLocale;
	NSString* _modelHash;
	NSData* _digest;
	NSData* _signature;
	NSData* _certificate;

}

@property (nonatomic,readonly) NSData * modelData;                  //@synthesize modelData=_modelData - In the implementation block
@property (nonatomic,readonly) NSString * modelLocale;              //@synthesize modelLocale=_modelLocale - In the implementation block
@property (nonatomic,readonly) NSString * modelHash;                //@synthesize modelHash=_modelHash - In the implementation block
@property (nonatomic,readonly) NSData * digest;                     //@synthesize digest=_digest - In the implementation block
@property (nonatomic,readonly) NSData * signature;                  //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSData * certificate;                //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)signature;
-(NSString *)modelHash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)certificate;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)builtInRTModelDictionary;
-(NSData *)digest;
-(NSData *)modelData;
-(id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3 ;
-(id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3 digest:(id)arg4 signature:(id)arg5 certificate:(id)arg6 ;
-(id)initWithHash:(id)arg1 locale:(id)arg2 ;
-(NSString *)modelLocale;
@end

