/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)protocol;
-(long long)method;
-(void)setMethod:(long long)arg1 ;
-(NSDictionary *)items;
-(void)setItems:(NSDictionary *)arg1 ;
-(NSArray *)addresses;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSString *)router;
-(void)setRouter:(NSString *)arg1 ;
-(NSArray *)prefixLengths;
-(id)initWithMethod:(long long)arg1 addresses:(id)arg2 prefixLengths:(id)arg3 router:(id)arg4 ;
-(void)setPrefixLengths:(NSArray *)arg1 ;
@end

