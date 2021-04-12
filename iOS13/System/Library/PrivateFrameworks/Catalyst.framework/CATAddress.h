/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@class NSString, NSData;

@interface CATAddress : NSObject {

	NSString* _address;
	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * address;                             //@synthesize address=_address - In the implementation block
@property (getter=isAny,nonatomic,readonly) BOOL any; 
@property (getter=isLocalWiFi,nonatomic,readonly) BOOL localWiFi; 
+(id)any;
+(id)localWiFi;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSData *)data;
-(NSString *)address;
-(BOOL)isEqualToAddress:(id)arg1 ;
-(BOOL)isAny;
-(BOOL)isLocalWiFi;
@end

