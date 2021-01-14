/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INJSONEncoderConfiguration, NSString;

@interface INJSONEncoder : NSObject <NSCopying> {

	INJSONEncoderConfiguration* _configuration;

}

@property (nonatomic,readonly) INJSONEncoderConfiguration * _storedConfiguration; 
@property (nonatomic,copy,readonly) INJSONEncoderConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * languageCode; 
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)init;
-(id)encodeObject:(id)arg1 ;
-(NSString *)languageCode;
-(id)initWithConfiguration:(id)arg1 ;
-(INJSONEncoderConfiguration *)configuration;
-(id)encodeObject:(id)arg1 withCodableDescription:(id)arg2 ;
-(id)encodeObject:(id)arg1 withCodableAttribute:(id)arg2 ;
-(id)_encodeObject:(id)arg1 codableAttribute:(id)arg2 ;
-(INJSONEncoderConfiguration *)_storedConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

