/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSMutableDictionary;

@interface HFCharacteristicReadLogger : NSObject {

	NSMutableDictionary* _accessoriesToReadByTransport;

}

@property (nonatomic,retain) NSMutableDictionary * accessoriesToReadByTransport;              //@synthesize accessoriesToReadByTransport=_accessoriesToReadByTransport - In the implementation block
+(id)nameForTransportType:(unsigned long long)arg1 ;
+(id)transportKeyForCharacteristic:(id)arg1 ;
-(id)init;
-(void)addCharacteristic:(id)arg1 withUpdateLogger:(id)arg2 ;
-(unsigned long long)numberOfAccessoriesForTransportType:(unsigned long long)arg1 ;
-(void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2 ;
-(NSMutableDictionary *)accessoriesToReadByTransport;
-(void)setAccessoriesToReadByTransport:(NSMutableDictionary *)arg1 ;
@end

