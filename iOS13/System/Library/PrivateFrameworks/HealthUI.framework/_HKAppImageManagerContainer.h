/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
@end

