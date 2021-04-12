/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface INParameter : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _indexesForSubKeyPaths;
	Class _parameterClass;
	NSString* _parameterKeyPath;

}

@property (nonatomic,retain) Class parameterClass;                                      //@synthesize parameterClass=_parameterClass - In the implementation block
@property (nonatomic,copy) NSString * parameterKeyPath;                                 //@synthesize parameterKeyPath=_parameterKeyPath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _indexesForSubKeyPaths;              //@synthesize indexesForSubKeyPaths=_indexesForSubKeyPaths - In the implementation block
@property (nonatomic,copy,readonly) NSString * _subscriptedKeyPath; 
+(BOOL)supportsSecureCoding;
+(id)parameterForClass:(Class)arg1 keyPath:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSMutableDictionary *)_indexesForSubKeyPaths;
-(BOOL)isEqualToParameter:(id)arg1 ;
-(void)setIndex:(unsigned long long)arg1 forSubKeyPath:(id)arg2 ;
-(unsigned long long)indexForSubKeyPath:(id)arg1 ;
-(id)_valueOfObject:(id)arg1 forRemainingKeyPath:(id)arg2 inFullyQualifiedKeyPath:(id)arg3 ;
-(id)_sanitizedKeyPathForKeyPath:(id)arg1 removingSubscripts:(BOOL)arg2 ;
-(NSString *)_subscriptedKeyPath;
-(void)_setIndexesForKeyPathWithSubscripts:(id)arg1 ;
-(id)_parameterValueForParameterizedObject:(id)arg1 ;
-(id)parameterValue;
-(id)parameterizedObject;
-(void)set_indexesForSubKeyPaths:(NSMutableDictionary *)arg1 ;
-(Class)parameterClass;
-(void)setParameterClass:(Class)arg1 ;
-(NSString *)parameterKeyPath;
-(void)setParameterKeyPath:(NSString *)arg1 ;
@end

