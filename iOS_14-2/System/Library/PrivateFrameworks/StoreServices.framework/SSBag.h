/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString, NSDate, SSBagProfileConfig;

@interface SSBag : NSObject {

	NSString* _profile;
	NSString* _profileVersion;

}

@property (nonatomic,retain) NSString * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                         //@synthesize profileVersion=_profileVersion - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) SSBagProfileConfig * profileConfig; 
+(id)bagWithProfileConfig:(id)arg1 ;
+(void)removeAllDebugBackingDictionaries;
+(void)setDebugBackingDictionary:(id)arg1 forProfileConfig:(id)arg2 ;
+(id)cache;
+(unsigned long long)_AMSBagValueTypeFromSSBagValueType:(unsigned long long)arg1 ;
-(void)setProfile:(NSString *)arg1 ;
-(void)boolForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dictionaryForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)doubleForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)integerForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)stringForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)URLForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)arrayPromiseForKey:(id)arg1 ;
-(id)dictionaryPromiseForKey:(id)arg1 ;
-(id)doublePromiseForKey:(id)arg1 ;
-(id)integerPromiseForKey:(id)arg1 ;
-(id)stringPromiseForKey:(id)arg1 ;
-(id)URLPromiseForKey:(id)arg1 ;
-(SSBagProfileConfig *)profileConfig;
-(BOOL)URLIsTrusted:(id)arg1 ;
-(BOOL)canHandleTrustedDomains;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)_AMSBag;
-(id)description;
-(id)stringForKey:(id)arg1 error:(id*)arg2 ;
-(id)resetCaches;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)arrayForKey:(id)arg1 error:(id*)arg2 ;
-(id)boolForKey:(id)arg1 error:(id*)arg2 ;
-(id)doubleForKey:(id)arg1 error:(id*)arg2 ;
-(id)integerForKey:(id)arg1 error:(id*)arg2 ;
-(id)URLForKey:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryForKey:(id)arg1 error:(id*)arg2 ;
-(void)_bagChanged:(id)arg1 ;
-(void)dealloc;
-(id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 ;
-(void)arrayForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)boolPromiseForKey:(id)arg1 ;
-(NSString *)profileVersion;
@end

