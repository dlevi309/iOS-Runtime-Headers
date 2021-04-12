/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, SSBag, ISURLBag;

@interface ISAMSBagShim : NSObject <AMSBagProtocol> {

	SSBag* _bag;
	ISURLBag* _URLBag;
	long long _type;

}

@property (nonatomic,retain) SSBag * bag;                                   //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) ISURLBag * URLBag;                             //@synthesize URLBag=_URLBag - In the implementation block
@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)boolForKey:(id)arg1 ;
-(BOOL)isLoaded;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)initWithBag:(id)arg1 ;
-(SSBag *)bag;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)setBag:(SSBag *)arg1 ;
-(id)initWithURLBag:(id)arg1 ;
-(ISURLBag *)URLBag;
-(void)setURLBag:(ISURLBag *)arg1 ;
-(id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

