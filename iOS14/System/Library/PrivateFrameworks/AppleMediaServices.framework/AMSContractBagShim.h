/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSObject, NSDate, NSString, AMSProcessInfo;

@interface AMSContractBagShim : NSObject <AMSBagProtocol> {

	NSObject* _bagContract;

}

@property (nonatomic,retain) NSObject * bagContract;                           //@synthesize bagContract=_bagContract - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_callSelector:(SEL)arg1 onBagContract:(id)arg2 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)initWithBagContract:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(NSObject *)bagContract;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)_bagValueForBagKey:(id)arg1 bagValueType:(unsigned long long)arg2 ;
-(SEL)_selectorForBagKey:(id)arg1 ;
-(BOOL)isLoaded;
-(id)stringForKey:(id)arg1 ;
-(void)setBagContract:(NSObject *)arg1 ;
-(NSString *)profileVersion;
@end

