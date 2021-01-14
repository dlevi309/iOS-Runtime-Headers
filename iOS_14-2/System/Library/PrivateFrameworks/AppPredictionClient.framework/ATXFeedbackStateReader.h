/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSData, NSString;

@interface ATXFeedbackStateReader : NSObject {

	NSData* _data;
	const char* _perPredictionDataStart;
	int _predictionCount;
	Class _predictedItemKeyClass;
	NSString* _abGroup;
	long long _assetVersion;

}

@property (nonatomic,readonly) NSString * abGroup;                  //@synthesize abGroup=_abGroup - In the implementation block
@property (nonatomic,readonly) long long assetVersion;              //@synthesize assetVersion=_assetVersion - In the implementation block
+(id)numberKeyWithData:(id)arg1 ;
+(id)stringKeyWithData:(id)arg1 ;
-(long long)assetVersion;
-(id)initWithData:(id)arg1 predictedItemKeyClass:(Class)arg2 ;
-(id)init;
-(void)enumerateApps:(/*^block*/id)arg1 ;
-(NSString *)abGroup;
@end

