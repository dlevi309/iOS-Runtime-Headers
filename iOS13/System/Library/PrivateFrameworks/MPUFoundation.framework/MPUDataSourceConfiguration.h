/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@class NSString;

@interface MPUDataSourceConfiguration : NSObject {

	Class _dataSourceClass;
	NSString* _dataSourceCachingKey;
	/*^block*/id _defaultQueryCreationBlock;
	long long _entityType;

}

@property (nonatomic,readonly) Class dataSourceClass;                    //@synthesize dataSourceClass=_dataSourceClass - In the implementation block
@property (nonatomic,copy) NSString * dataSourceCachingKey;              //@synthesize dataSourceCachingKey=_dataSourceCachingKey - In the implementation block
@property (nonatomic,copy) id defaultQueryCreationBlock;                 //@synthesize defaultQueryCreationBlock=_defaultQueryCreationBlock - In the implementation block
@property (assign,nonatomic) long long entityType;                       //@synthesize entityType=_entityType - In the implementation block
+(id)configurationWithDataSourceClass:(Class)arg1 ;
-(Class)dataSourceClass;
-(long long)entityType;
-(void)setEntityType:(long long)arg1 ;
-(id)initWithDataSourceClass:(Class)arg1 ;
-(NSString *)dataSourceCachingKey;
-(void)setDataSourceCachingKey:(NSString *)arg1 ;
-(id)defaultQueryCreationBlock;
-(void)setDefaultQueryCreationBlock:(id)arg1 ;
@end

