/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/ATXScoreLogSerializable.h>

@class NSSet, NSString;

@interface ATXScoreDict : NSObject <ATXScoreLogSerializable> {

	CFDictionaryRef _dict;
	NSSet* _defaultKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long count; 
+(id)scoreDictFromDictionary:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)count;
-(void)getKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDefaultValueForKeys:(id)arg1 ;
-(void)setScore:(double)arg1 forKey:(id)arg2 ;
-(double)scoreForKey:(id)arg1 found:(BOOL*)arg2 ;
-(id)toDictionary;
-(void)atx_writeToFile:(_sFILE*)arg1 ;
-(id)initWithDefaultValueForScoreTypeKeys;
@end

