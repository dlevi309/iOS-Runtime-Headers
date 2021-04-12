/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSource:(/*^block*/id)arg1 ;
-(NSData *)bytes;
-(id)initWithBytes:(id)arg1 ;
-(id)description;
-(NSArray *)historicalRecords;
-(id)parseFromSource:(/*^block*/id)arg1 ;
-(id)interfaceGroupAtIndex:(long long)arg1 ;
-(id)_formatHexData:(id)arg1 to:(id)arg2 ;
-(id)interfaceGroupForProtocol:(unsigned long long)arg1 ;
-(NSData *)historicalBytes;
-(NSArray *)protocols;
@end

