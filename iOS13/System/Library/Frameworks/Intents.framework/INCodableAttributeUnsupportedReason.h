/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttributeDialog.h>

@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog {

	NSString* _code;

}

@property (nonatomic,copy) NSString * code;                                  //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateFormat; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)predicateFormat;
-(void)setCode:(NSString *)arg1 ;
-(id)cacheGroup;
-(id)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
@end

