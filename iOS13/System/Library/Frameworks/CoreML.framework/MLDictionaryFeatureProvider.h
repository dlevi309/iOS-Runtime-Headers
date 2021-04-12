/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NSSet;

@interface MLDictionaryFeatureProvider : NSObject <MLFeatureProvider, NSFastEnumeration> {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_ML58*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithFeatureProvider:(id)arg1 featureNames:(id)arg2 ;
-(id)initWithFeatureProvider:(id)arg1 ;
-(id)initWithFeatureValueDictionary:(id)arg1 ;
@end

