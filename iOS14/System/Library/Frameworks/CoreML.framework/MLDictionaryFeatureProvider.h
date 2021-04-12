/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSSet;

@interface MLDictionaryFeatureProvider : NSObject <MLFeatureProvider, NSFastEnumeration, NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithFeatureProvider:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSSet *)featureNames;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_ML62*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFeatureProvider:(id)arg1 featureNames:(id)arg2 ;
-(NSDictionary *)dictionary;
-(id)initWithFeatureValueDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

