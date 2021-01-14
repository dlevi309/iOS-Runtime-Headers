/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <Foundation/NSCoder.h>

@class NSDictionary;

@interface HMIJSONUnarchiver : NSCoder {

	NSDictionary* _classMap;
	id _container;

}

@property (readonly) id container;                       //@synthesize container=_container - In the implementation block
@property (retain) NSDictionary * classMap;              //@synthesize classMap=_classMap - In the implementation block
+(id)objectWithJSONData:(id)arg1 classMap:(id)arg2 ;
+(id)objectWithJSONObject:(id)arg1 classMap:(id)arg2 ;
+(id)objectWithJSONObjectString:(id)arg1 classMap:(id)arg2 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)container;
-(id)initWithJSONObject:(id)arg1 ;
-(id)_objectWithJSONObject:(id)arg1 allowedClasses:(id)arg2 ;
-(NSDictionary *)classMap;
-(void)setClassMap:(NSDictionary *)arg1 ;
@end

