/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSArray *)values;
-(NSString *)defaultValue;
-(id)initWithAttributes:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(BOOL)isValid:(out id*)arg1 ;
-(NSString *)identityValue;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)initWithValues:(id)arg1 attributes:(id)arg2 ;
-(BOOL)validateValues:(out id*)arg1 ;
@end

