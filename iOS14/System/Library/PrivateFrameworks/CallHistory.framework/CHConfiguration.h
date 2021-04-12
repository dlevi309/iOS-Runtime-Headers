/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <libobjc.A.dylib/CHConfiguration.h>

@protocol CHConfiguration <NSObject>
@property (assign,nonatomic,__weak) id<CHConfigurationDelegate> delegate; 
@property (getter=isCloudKitEnabled,nonatomic,readonly) BOOL cloudKitEnabled; 
@required
-(BOOL)isCloudKitEnabled;
-(id<CHConfigurationDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end


@protocol CHKeyValueDataSource, CHConfigurationDelegate;
@class NSString;

@interface CHConfiguration : NSObject <CHConfiguration> {

	id<CHKeyValueDataSource> _dataSource;
	id<CHConfigurationDelegate> _delegate;

}

@property (nonatomic,readonly) id<CHKeyValueDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CHConfigurationDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCloudKitEnabled,nonatomic,readonly) BOOL cloudKitEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)numberForKey:(id)arg1 ;
-(BOOL)isCloudKitEnabled;
-(id<CHConfigurationDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(id<CHKeyValueDataSource>)dataSource;
-(void)setDelegate:(id<CHConfigurationDelegate>)arg1 ;
@end

