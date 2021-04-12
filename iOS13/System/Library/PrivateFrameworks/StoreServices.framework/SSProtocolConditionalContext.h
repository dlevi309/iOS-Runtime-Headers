/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)systemVersion;
-(id)itemLookupBlock;
-(NSString *)platformName;
-(void)setItemLookupBlock:(id)arg1 ;
-(void)setPlatformName:(NSString *)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
@end

