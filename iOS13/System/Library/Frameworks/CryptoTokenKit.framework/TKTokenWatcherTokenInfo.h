/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)slotName;
-(NSString *)tokenID;
-(NSString *)driverName;
-(id)initWithTokenInfo:(id)arg1 ;
@end

