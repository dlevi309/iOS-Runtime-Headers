/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

@class NSDate, NSString, AMSProcessInfo;


@protocol AMSBagProtocol <NSObject>
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@optional
-(AMSProcessInfo *)processInfo;
-(id)URLForKey:(id)arg1 account:(id)arg2;

@required
-(id)dictionaryForKey:(id)arg1;
-(id)URLForKey:(id)arg1;
-(id)doubleForKey:(id)arg1;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(id)integerForKey:(id)arg1;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1;
-(id)stringForKey:(id)arg1;
-(NSString *)profileVersion;

@end

