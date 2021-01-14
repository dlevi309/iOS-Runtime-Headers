/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSetting.h>

@class NSArray, NSString;

@interface NUEnumSetting : NUSetting {

	NSArray* _values;

}

@property (readonly) NSArray * values;                      //@synthesize values=_values - In the implementation block
@property (readonly) NSString * defaultValue; 
@property (readonly) NSString * identityValue; 
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(NSString *)defaultValue;
-(NSArray *)values;
-(id)initWithAttributes:(id)arg1 ;
-(id)description;
-(NSString *)identityValue;
-(BOOL)isValid:(out id*)arg1 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)initWithValues:(id)arg1 attributes:(id)arg2 ;
-(BOOL)validateValues:(out id*)arg1 ;
@end

