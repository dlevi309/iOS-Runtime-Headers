/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithString:(id)arg1 ;
-(id)init;
-(BOOL)isAny;
-(id)initWithData:(id)arg1 ;
-(BOOL)isEqualToAddress:(id)arg1 ;
-(id)description;
-(NSString *)address;
-(NSData *)data;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isLocalWiFi;
@end

