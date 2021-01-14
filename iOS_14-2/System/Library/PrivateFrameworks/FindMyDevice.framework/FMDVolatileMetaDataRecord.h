/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/FMDDictionaryRepresentable.h>

@class NSDictionary, NSString;

@interface FMDVolatileMetaDataRecord : NSObject <NSSecureCoding, FMDDictionaryRepresentable> {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;                     //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSDictionary *)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(void)appendMetaData:(id)arg1 ;
@end

