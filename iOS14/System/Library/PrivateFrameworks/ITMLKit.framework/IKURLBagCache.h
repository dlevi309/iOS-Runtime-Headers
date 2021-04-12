/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, SSURLBag, NSDictionary;

@interface IKURLBagCache : NSObject <AMSBagProtocol> {

	SSURLBag* _urlBag;
	NSDictionary* _existingDictionary;
	NSString* _cachePath;

}

@property (nonatomic,readonly) SSURLBag * urlBag;                              //@synthesize urlBag=_urlBag - In the implementation block
@property (nonatomic,readonly) NSDictionary * existingDictionary;              //@synthesize existingDictionary=_existingDictionary - In the implementation block
@property (nonatomic,readonly) NSString * cachePath;                           //@synthesize cachePath=_cachePath - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)URLBagContext;
+(id)sharedCache;
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(id)URLForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(SSURLBag *)urlBag;
-(id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isLoaded;
-(id)stringForKey:(id)arg1 ;
-(NSString *)cachePath;
-(NSString *)profileVersion;
-(void)updateWithInvalidation:(BOOL)arg1 ;
-(void)_loadWithNotification:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)existingDictionary;
-(void)loadValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkTrustStatusForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_urlForKey:(id)arg1 ;
-(BOOL)isTrustedURL:(id)arg1 ;
@end

