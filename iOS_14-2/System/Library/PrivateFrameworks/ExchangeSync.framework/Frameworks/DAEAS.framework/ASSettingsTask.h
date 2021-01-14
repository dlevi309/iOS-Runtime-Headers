/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSDictionary, DASettingsRequestParams;

@interface ASSettingsTask : ASTask {

	int _key;
	NSArray* _getters;
	NSDictionary* _setters;
	DASettingsRequestParams* _requestParams;
	long long _status;
	id _result;

}

@property (assign,nonatomic) int key;                                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) id result;                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSArray * getters;                                    //@synthesize getters=_getters - In the implementation block
@property (nonatomic,retain) NSDictionary * setters;                               //@synthesize setters=_setters - In the implementation block
@property (nonatomic,retain) DASettingsRequestParams * requestParams;              //@synthesize requestParams=_requestParams - In the implementation block
-(void)setResult:(id)arg1 ;
-(id)init;
-(int)key;
-(id)result;
-(void)finishWithError:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSArray *)getters;
-(NSDictionary *)setters;
-(id)requestBody;
-(void)setKey:(int)arg1 ;
-(long long)status;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(void)setGetters:(NSArray *)arg1 ;
-(void)setSetters:(NSDictionary *)arg1 ;
-(DASettingsRequestParams *)requestParams;
-(void)setRequestParams:(DASettingsRequestParams *)arg1 ;
@end

