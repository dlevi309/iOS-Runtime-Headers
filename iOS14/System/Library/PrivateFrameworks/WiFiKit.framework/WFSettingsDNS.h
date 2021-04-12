/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFSettingsPersistable.h>

@class NSArray, NSDictionary, NSString;

@interface WFSettingsDNS : NSObject <WFSettingsPersistable> {

	NSArray* _serverAddresses;
	NSArray* _searchDomains;
	NSDictionary* _items;

}

@property (nonatomic,retain) NSArray * serverAddresses;              //@synthesize serverAddresses=_serverAddresses - In the implementation block
@property (nonatomic,retain) NSArray * searchDomains;                //@synthesize searchDomains=_searchDomains - In the implementation block
@property (nonatomic,retain) NSDictionary * items;                   //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)automaticConfig;
-(void)setItems:(NSDictionary *)arg1 ;
-(id)protocol;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)items;
-(NSString *)description;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(void)setServerAddresses:(NSArray *)arg1 ;
-(NSArray *)searchDomains;
-(NSArray *)serverAddresses;
-(id)initWithServerAddresses:(id)arg1 searchDomains:(id)arg2 ;
@end

