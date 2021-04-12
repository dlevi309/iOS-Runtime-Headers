/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSObject, NSString, NSDate;

@interface AMSContractBagShim : NSObject <AMSBagProtocol> {

	NSObject* _bagContract;

}

@property (nonatomic,retain) NSObject * bagContract;                        //@synthesize bagContract=_bagContract - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
+(id)_callSelector:(SEL)arg1 onBagContract:(id)arg2 ;
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
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)_bagValueForBagKey:(id)arg1 bagValueType:(unsigned long long)arg2 ;
-(NSObject *)bagContract;
-(SEL)_selectorForBagKey:(id)arg1 ;
-(id)initWithBagContract:(id)arg1 ;
-(void)setBagContract:(NSObject *)arg1 ;
@end

