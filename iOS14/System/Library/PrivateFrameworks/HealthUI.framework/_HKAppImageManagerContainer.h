/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, NSMutableData;

@interface _HKAppImageManagerContainer : NSObject {

	/*^block*/id _completionHandler;
	NSString* _urlString;
	NSMutableData* _data;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * urlString;                //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
-(NSString *)urlString;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setData:(NSMutableData *)arg1 ;
-(NSMutableData *)data;
-(void)setUrlString:(NSString *)arg1 ;
@end

