/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedInstance;
+(BOOL)boolForKey:(id)arg1 ;
+(id)stringForKey:(id)arg1 ;
+(id)arrayForKey:(id)arg1 ;
+(long long)integerForKey:(id)arg1 ;
+(double)doubleForKey:(id)arg1 ;
+(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
+(void)setDouble:(double)arg1 forKey:(id)arg2 ;
+(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(void)setString:(id)arg1 forKey:(id)arg2 ;
+(void)setArray:(id)arg1 forKey:(id)arg2 ;
+(BOOL)defaultIsSetForKey:(id)arg1 ;
+(id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2 ;
+(void)_setDefaultValue:(id)arg1 forKey:(id)arg2 ;
+(void)addFactoryDefaults:(id)arg1 ;
+(id)factoryDefaults;
-(id)init;
-(NSMutableDictionary *)factoryDefaults;
-(void)setFactoryDefaults:(NSMutableDictionary *)arg1 ;
-(CFStringRef)defaultsBundleID;
-(void)setDefaultsBundleID:(CFStringRef)arg1 ;
@end

