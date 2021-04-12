/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@protocol AMSBagDataSourceProtocol;
@class NSDate, NSString, AMSProcessInfo;

@interface AMSBag : NSObject <AMSBagProtocol> {

	id<AMSBagDataSourceProtocol> _dataSource;

}

@property (nonatomic,retain) id<AMSBagDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * descriptionExtended; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagCache;
+(id)bagForProfile:(id)arg1 profileVersion:(id)arg2 ;
+(id)bagCacheAccessQueue;
+(void)_resetBagCache;
+(id)bagForProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3 ;
-(AMSProcessInfo *)processInfo;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 account:(id)arg2 ;
-(id)URLForKey:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id<AMSBagDataSourceProtocol>)dataSource;
-(NSString *)description;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)descriptionExtended;
-(BOOL)isLoaded;
-(id)stringForKey:(id)arg1 ;
-(NSString *)profileVersion;
@end

