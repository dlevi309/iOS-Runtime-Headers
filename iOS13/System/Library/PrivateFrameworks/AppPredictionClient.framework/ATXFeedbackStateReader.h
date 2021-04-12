/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)stringKeyWithData:(id)arg1 ;
+(id)numberKeyWithData:(id)arg1 ;
-(id)init;
-(long long)assetVersion;
-(id)initWithData:(id)arg1 predictedItemKeyClass:(Class)arg2 ;
-(void)enumerateApps:(/*^block*/id)arg1 ;
-(NSString *)abGroup;
@end

