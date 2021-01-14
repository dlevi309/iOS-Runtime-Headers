/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSProtocolConditionalContext : NSObject <NSCopying> {

	/*^block*/id _itemLookupBlock;
	NSString* _platformName;
	NSString* _systemVersion;

}

@property (nonatomic,copy) id itemLookupBlock;                    //@synthesize itemLookupBlock=_itemLookupBlock - In the implementation block
@property (nonatomic,copy) NSString * platformName;               //@synthesize platformName=_platformName - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
-(NSString *)systemVersion;
-(id)itemLookupBlock;
-(void)setItemLookupBlock:(id)arg1 ;
-(void)setPlatformName:(NSString *)arg1 ;
-(NSString *)platformName;
-(void)setSystemVersion:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

