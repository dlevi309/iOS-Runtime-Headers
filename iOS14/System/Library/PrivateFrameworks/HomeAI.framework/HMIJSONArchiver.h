/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <Foundation/NSCoder.h>

@class NSString;

@interface HMIJSONArchiver : NSCoder {

	id _container;
	long long _options;

}

@property (assign) long long options;                          //@synthesize options=_options - In the implementation block
@property (readonly) NSString * objectJSON; 
@property (readonly) NSString * objectPrettyJSON; 
+(id)JSONObjectStringWithObject:(id)arg1 pretty:(BOOL)arg2 options:(long long)arg3 ;
+(id)JSONObjectWithObject:(id)arg1 options:(long long)arg2 ;
+(id)JSONObjectStringWithObject:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(long long)options;
-(id)object;
-(void)setOptions:(long long)arg1 ;
-(void)_addValueToContainer:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_containerIsArray;
-(id)_valueForNumber:(id)arg1 ;
-(id)_JSONObjectWithObject:(id)arg1 options:(long long)arg2 ;
-(id)initWithDictionary;
-(void)_addClassToContainer:(Class)arg1 ;
-(id)initWithArray;
-(NSString *)objectJSON;
-(NSString *)objectPrettyJSON;
@end

