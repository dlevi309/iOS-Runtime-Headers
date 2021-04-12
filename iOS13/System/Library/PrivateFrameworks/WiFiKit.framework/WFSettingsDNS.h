/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)protocol;
-(NSDictionary *)items;
-(void)setItems:(NSDictionary *)arg1 ;
-(NSArray *)searchDomains;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(void)setServerAddresses:(NSArray *)arg1 ;
-(NSArray *)serverAddresses;
-(id)initWithServerAddresses:(id)arg1 searchDomains:(id)arg2 ;
@end

