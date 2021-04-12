/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class NSDictionary;


@protocol TBFetchRequest <NSObject,NSCopying>
@property (nonatomic,readonly) id<TBFetchRequestDescriptor> descriptor; 
@property (assign,nonatomic) unsigned long long sourcePolicy; 
@property (nonatomic,copy) id resultsHandler; 
@property (nonatomic,copy) id preferLocalHandler; 
@property (nonatomic,readonly) BOOL cacheable; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@optional
-(void)setUserInfo:(id)arg1;
-(NSDictionary *)userInfo;
-(void)handlePreferLocalResponse:(id)arg1;

@required
-(void)handleResponse:(id)arg1;
-(id<TBFetchRequestDescriptor>)descriptor;
-(id)resultsHandler;
-(void)setResultsHandler:(/*^block*/id)arg1;
-(unsigned long long)sourcePolicy;
-(void)setSourcePolicy:(unsigned long long)arg1;
-(BOOL)cacheable;
-(id)preferLocalHandler;
-(void)setPreferLocalHandler:(/*^block*/id)arg1;

@end

