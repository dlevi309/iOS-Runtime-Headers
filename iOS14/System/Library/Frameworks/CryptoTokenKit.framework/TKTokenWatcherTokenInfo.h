/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSString;

@interface TKTokenWatcherTokenInfo : NSObject {

	NSString* _tokenID;
	NSString* _driverName;
	NSString* _slotName;

}

@property (nonatomic,readonly) NSString * tokenID;                 //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) NSString * driverName;              //@synthesize driverName=_driverName - In the implementation block
@property (nonatomic,readonly) NSString * slotName;                //@synthesize slotName=_slotName - In the implementation block
-(NSString *)tokenID;
-(id)initWithTokenInfo:(id)arg1 ;
-(NSString *)driverName;
-(NSString *)slotName;
@end

