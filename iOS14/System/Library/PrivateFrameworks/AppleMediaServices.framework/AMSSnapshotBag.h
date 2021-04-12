/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, AMSBagFrozenDataSource, NSString, AMSProcessInfo;

@interface AMSSnapshotBag : NSObject <NSSecureCoding, AMSBagProtocol> {

	NSDate* _creationDate;
	AMSBagFrozenDataSource* _dataSource;

}

@property (nonatomic,retain) AMSBagFrozenDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)compile;
-(id)dictionaryForKey:(id)arg1 ;
-(id)_initWithDataSource:(id)arg1 ;
-(id)init;
-(id)URLForKey:(id)arg1 account:(id)arg2 ;
-(id)URLForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(AMSBagFrozenDataSource *)dataSource;
-(id)initWithData:(id)arg1 ;
-(void)setDataSource:(AMSBagFrozenDataSource *)arg1 ;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)_initWithSnapshotBag:(id)arg1 ;
-(id)boolForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isLoaded;
-(id)stringForKey:(id)arg1 ;
-(NSString *)profileVersion;
@end

