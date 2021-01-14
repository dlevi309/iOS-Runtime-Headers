/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSMutableData, NSString;

@interface _MKAppImageManagerContainer : NSObject {

	/*^block*/id _completionHandler;
	NSMutableData* _data;
	NSString* _urlString;
	unsigned long long _signpostID;

}

@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * urlString;                         //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                       //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;              //@synthesize signpostID=_signpostID - In the implementation block
-(NSString *)urlString;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(unsigned long long)signpostID;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setData:(NSMutableData *)arg1 ;
-(NSMutableData *)data;
-(void)setUrlString:(NSString *)arg1 ;
@end

