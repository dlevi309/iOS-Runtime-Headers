/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFSettingsPersistable.h>

@class NSArray, NSString, NSDictionary;

@interface WFSettingsIPV6 : NSObject <WFSettingsPersistable> {

	long long _method;
	NSArray* _addresses;
	NSArray* _prefixLengths;
	NSString* _router;
	NSDictionary* _items;

}

@property (assign,nonatomic) long long method;                      //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSArray * prefixLengths;               //@synthesize prefixLengths=_prefixLengths - In the implementation block
@property (nonatomic,retain) NSArray * addresses;                   //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,copy) NSString * router;                       //@synthesize router=_router - In the implementation block
@property (nonatomic,retain) NSDictionary * items;                  //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)automaticConfig;
+(id)linkLocalConfig;
-(NSArray *)addresses;
-(void)setItems:(NSDictionary *)arg1 ;
-(id)protocol;
-(long long)method;
-(NSString *)router;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)items;
-(NSString *)description;
-(void)setMethod:(long long)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(void)setRouter:(NSString *)arg1 ;
-(NSArray *)prefixLengths;
-(id)initWithMethod:(long long)arg1 addresses:(id)arg2 prefixLengths:(id)arg3 router:(id)arg4 ;
-(void)setPrefixLengths:(NSArray *)arg1 ;
@end

