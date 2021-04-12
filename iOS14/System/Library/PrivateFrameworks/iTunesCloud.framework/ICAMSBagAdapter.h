/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, NSMutableArray, ICURLBag, NSError, ICStoreRequestContext;

@interface ICAMSBagAdapter : NSObject <AMSBagProtocol> {

	os_unfair_lock_s _lock;
	NSMutableArray* _pendingBagValuePromises;
	ICURLBag* _urlBag;
	NSError* _urlBagLoadingError;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_valueFromBagDictionary:(id)arg1 forKeyPath:(id)arg2 valueType:(unsigned long long)arg3 ;
+(BOOL)_value:(id)arg1 matchesExpectedType:(unsigned long long)arg2 ;
+(id)_valueForBagKey:(id)arg1 valueType:(unsigned long long)arg2 fromURLBag:(id)arg3 urlBagLoadingError:(id)arg4 valueRetrievingError:(id*)arg5 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(void)_didFinishLoadingBag:(id)arg1 error:(id)arg2 ;
-(id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(NSString *)profileVersion;
@end

