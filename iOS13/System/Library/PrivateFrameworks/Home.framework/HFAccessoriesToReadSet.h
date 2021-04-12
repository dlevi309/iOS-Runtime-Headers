/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSMutableDictionary, NSNumber;

@interface HFAccessoriesToReadSet : NSObject {

	NSMutableDictionary* _accessories;
	NSNumber* _transportKey;

}

@property (nonatomic,retain) NSMutableDictionary * accessories;              //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSNumber * transportKey;                        //@synthesize transportKey=_transportKey - In the implementation block
-(long long)count;
-(id)initWithTransportType:(id)arg1 ;
-(NSMutableDictionary *)accessories;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2 ;
-(NSNumber *)transportKey;
-(void)addCharacteristic:(id)arg1 ;
-(void)setTransportKey:(NSNumber *)arg1 ;
@end

