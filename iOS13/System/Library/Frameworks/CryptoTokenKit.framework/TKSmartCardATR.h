/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSMutableArray, NSData, NSArray;

@interface TKSmartCardATR : NSObject {

	NSMutableArray* _interfaces;
	NSData* _bytes;
	NSData* _historicalBytes;

}

@property (nonatomic,readonly) NSData * bytes;                           //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) NSArray * protocols; 
@property (nonatomic,readonly) NSData * historicalBytes;                 //@synthesize historicalBytes=_historicalBytes - In the implementation block
@property (nonatomic,readonly) NSArray * historicalRecords; 
-(id)description;
-(NSData *)bytes;
-(NSArray *)protocols;
-(id)initWithBytes:(id)arg1 ;
-(id)initWithSource:(/*^block*/id)arg1 ;
-(NSData *)historicalBytes;
-(NSArray *)historicalRecords;
-(id)parseFromSource:(/*^block*/id)arg1 ;
-(id)interfaceGroupAtIndex:(long long)arg1 ;
-(id)_formatHexData:(id)arg1 to:(id)arg2 ;
-(id)interfaceGroupForProtocol:(unsigned long long)arg1 ;
@end

