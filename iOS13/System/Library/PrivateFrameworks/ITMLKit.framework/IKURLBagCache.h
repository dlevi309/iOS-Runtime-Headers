/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class SSURLBag, NSDictionary, NSString;

@interface IKURLBagCache : NSObject {

	SSURLBag* _urlBag;
	NSDictionary* _existingDictionary;
	NSString* _cachePath;

}

@property (nonatomic,readonly) SSURLBag * urlBag;                              //@synthesize urlBag=_urlBag - In the implementation block
@property (nonatomic,readonly) NSDictionary * existingDictionary;              //@synthesize existingDictionary=_existingDictionary - In the implementation block
@property (nonatomic,readonly) NSString * cachePath;                           //@synthesize cachePath=_cachePath - In the implementation block
+(id)sharedCache;
+(id)URLBagContext;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(NSString *)cachePath;
-(void)updateWithInvalidation:(BOOL)arg1 ;
-(SSURLBag *)urlBag;
-(void)_loadWithNotification:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)existingDictionary;
-(void)loadValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkTrustStatusForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isTrustedURL:(id)arg1 ;
@end

