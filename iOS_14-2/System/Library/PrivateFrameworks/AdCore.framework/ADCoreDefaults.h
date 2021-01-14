/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


#import <AdCore/AdCore-Structs.h>
@class NSMutableDictionary;

@interface ADCoreDefaults : NSObject {

	NSMutableDictionary* _factoryDefaults;
	CFStringRef _defaultsBundleID;

}

@property (nonatomic,retain) NSMutableDictionary * factoryDefaults;              //@synthesize factoryDefaults=_factoryDefaults - In the implementation block
@property (assign,nonatomic) CFStringRef defaultsBundleID;                       //@synthesize defaultsBundleID=_defaultsBundleID - In the implementation block
+(void)setString:(id)arg1 forKey:(id)arg2 ;
+(id)sharedInstance;
+(BOOL)defaultIsSetForKey:(id)arg1 ;
+(void)setDouble:(double)arg1 forKey:(id)arg2 ;
+(void)setArray:(id)arg1 forKey:(id)arg2 ;
+(double)doubleForKey:(id)arg1 ;
+(id)factoryDefaults;
+(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
+(void)_setDefaultValue:(id)arg1 forKey:(id)arg2 ;
+(BOOL)boolForKey:(id)arg1 ;
+(id)arrayForKey:(id)arg1 ;
+(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(long long)integerForKey:(id)arg1 ;
+(void)addFactoryDefaults:(id)arg1 ;
+(id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2 ;
+(id)stringForKey:(id)arg1 ;
-(void)setDefaultsBundleID:(CFStringRef)arg1 ;
-(id)init;
-(CFStringRef)defaultsBundleID;
-(NSMutableDictionary *)factoryDefaults;
-(void)setFactoryDefaults:(NSMutableDictionary *)arg1 ;
@end

