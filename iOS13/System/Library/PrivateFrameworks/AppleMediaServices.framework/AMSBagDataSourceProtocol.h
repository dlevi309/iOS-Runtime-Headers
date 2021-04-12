/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

@class NSDate, NSString;


@protocol AMSBagDataSourceProtocol <NSObject>
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy) id dataSourceChangedHandler; 
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler; 
@optional
-(void)setDataSourceChangedHandler:(/*^block*/id)arg1;
-(void)setDataSourceDataInvalidatedHandler:(/*^block*/id)arg1;
-(id)dataSourceChangedHandler;
-(id)dataSourceDataInvalidatedHandler;

@required
-(BOOL)isLoaded;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(void)loadWithCompletion:(/*^block*/id)arg1;
-(NSString *)profileVersion;
-(id)bagKeyInfoForKey:(id)arg1;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2;

@end

