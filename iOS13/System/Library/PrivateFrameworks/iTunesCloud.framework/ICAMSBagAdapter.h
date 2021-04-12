/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, NSMutableArray, ICURLBag, NSError, ICStoreRequestContext;

@interface ICAMSBagAdapter : NSObject <AMSBagProtocol> {

	os_unfair_lock_s _lock;
	NSMutableArray* _pendingBagValuePromises;
	ICURLBag* _urlBag;
	NSError* _urlBagLoadingError;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
+(id)_valueFromBagDictionary:(id)arg1 forKeyPath:(id)arg2 valueType:(unsigned long long)arg3 ;
+(BOOL)_value:(id)arg1 matchesExpectedType:(unsigned long long)arg2 ;
+(id)_valueForBagKey:(id)arg1 valueType:(unsigned long long)arg2 fromURLBag:(id)arg3 urlBagLoadingError:(id)arg4 valueRetrievingError:(id*)arg5 ;
-(id)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(ICStoreRequestContext *)requestContext;
-(id)initWithRequestContext:(id)arg1 ;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)_didFinishLoadingBag:(id)arg1 error:(id)arg2 ;
@end

