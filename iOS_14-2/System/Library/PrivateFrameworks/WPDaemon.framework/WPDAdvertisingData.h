/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@class NSMutableSet, NSMutableData, NSData;

@interface WPDAdvertisingData : NSObject {

	BOOL _isRanging;
	BOOL _assertPower;
	long long _advertRate;
	NSMutableSet* _types;
	NSMutableData* _internalData;

}

@property (retain) NSMutableData * internalData;                //@synthesize internalData=_internalData - In the implementation block
@property (retain) NSMutableSet * types;                        //@synthesize types=_types - In the implementation block
@property (assign) long long advertRate;                        //@synthesize advertRate=_advertRate - In the implementation block
@property (getter=getData,readonly) NSData * data; 
@property (assign) BOOL isRanging;                              //@synthesize isRanging=_isRanging - In the implementation block
@property (assign) BOOL assertPower;                            //@synthesize assertPower=_assertPower - In the implementation block
-(BOOL)isRanging;
-(NSMutableSet *)types;
-(void)setInternalData:(NSMutableData *)arg1 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)init;
-(NSMutableData *)internalData;
-(void)setAssertPower:(BOOL)arg1 ;
-(id)description;
-(void)setAdvertRate:(long long)arg1 ;
-(void)setIsRanging:(BOOL)arg1 ;
-(BOOL)assertPower;
-(id)getData;
-(BOOL)isValidWithAdditionalRequest:(id)arg1 ;
-(long long)advertRate;
-(void)setTypes:(NSMutableSet *)arg1 ;
-(void)addAdvertisingRequest:(id)arg1 ;
@end

