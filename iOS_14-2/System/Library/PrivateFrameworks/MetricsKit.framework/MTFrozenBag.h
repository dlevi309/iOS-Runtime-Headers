/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, NSDictionary;

@interface MTFrozenBag : NSObject <AMSBagProtocol> {

	NSString* _profile;
	NSString* _profileVersion;
	NSDictionary* _config;

}

@property (nonatomic,copy) NSString * profile;                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * profileVersion;                          //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,copy) NSDictionary * config;                              //@synthesize config=_config - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)config;
-(void)setProfile:(NSString *)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setConfig:(NSDictionary *)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(NSString *)profileVersion;
-(id)initWithProfile:(id)arg1 profileVersion:(id)arg2 config:(id)arg3 ;
@end

