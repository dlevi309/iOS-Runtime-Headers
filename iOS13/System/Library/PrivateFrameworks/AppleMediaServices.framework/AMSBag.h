/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@protocol AMSBagDataSourceProtocol;
@class NSDate, NSString;

@interface AMSBag : NSObject <AMSBagProtocol> {

	id<AMSBagDataSourceProtocol> _dataSource;

}

@property (nonatomic,retain) id<AMSBagDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
+(id)bagForProfile:(id)arg1 profileVersion:(id)arg2 ;
+(id)internalBag;
+(id)bagForProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3 ;
+(id)bagCacheAccessQueue;
+(id)bagCache;
+(void)_resetBagCache;
-(NSString *)description;
-(id)boolForKey:(id)arg1 ;
-(BOOL)isLoaded;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)initWithDataSource:(id)arg1 ;
-(id<AMSBagDataSourceProtocol>)dataSource;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(NSString *)profile;
-(BOOL)isExpired;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)URLForKey:(id)arg1 account:(id)arg2 ;
@end

