/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, NTReadablePrivateDataStorage;
@class NSArray;

@interface NTTodayModuleDescriptorsOperation : FCOperation {

	BOOL _requireRefreshedAppConfig;
	NSArray* _contentRequests;
	id<FCContentContext> _contentContext;
	id<NTReadablePrivateDataStorage> _privateDataStorage;
	/*^block*/id _descriptorsCompletion;

}

@property (nonatomic,copy) NSArray * contentRequests;                                          //@synthesize contentRequests=_contentRequests - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                              //@synthesize contentContext=_contentContext - In the implementation block
@property (assign,nonatomic) BOOL requireRefreshedAppConfig;                                   //@synthesize requireRefreshedAppConfig=_requireRefreshedAppConfig - In the implementation block
@property (nonatomic,retain) id<NTReadablePrivateDataStorage> privateDataStorage;              //@synthesize privateDataStorage=_privateDataStorage - In the implementation block
@property (nonatomic,copy) id descriptorsCompletion;                                           //@synthesize descriptorsCompletion=_descriptorsCompletion - In the implementation block
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id)init;
-(id<FCContentContext>)contentContext;
-(id<NTReadablePrivateDataStorage>)privateDataStorage;
-(void)setContentRequests:(NSArray *)arg1 ;
-(void)setPrivateDataStorage:(id<NTReadablePrivateDataStorage>)arg1 ;
-(void)setRequireRefreshedAppConfig:(BOOL)arg1 ;
-(void)setDescriptorsCompletion:(id)arg1 ;
-(id)descriptorsCompletion;
-(BOOL)requireRefreshedAppConfig;
-(NSArray *)contentRequests;
@end

