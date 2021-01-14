/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

@class NSDate, AMSProcessInfo, NSString;


@protocol AMSBagDataSourceProtocol <NSObject>
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,retain) NSString * descriptionExtended; 
@property (nonatomic,copy) id dataSourceChangedHandler; 
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler; 
@optional
-(void)setDataSourceDataInvalidatedHandler:(/*^block*/id)arg1;
-(id)dataSourceDataInvalidatedHandler;
-(void)setDataSourceChangedHandler:(/*^block*/id)arg1;
-(id)dataSourceChangedHandler;
-(void)setDescriptionExtended:(id)arg1;
-(NSString *)descriptionExtended;

@required
-(AMSProcessInfo *)processInfo;
-(void)loadWithCompletion:(/*^block*/id)arg1;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2;
-(id)bagKeyInfoForKey:(id)arg1;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isLoaded;
-(NSString *)profileVersion;

@end

