/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKKeychain;
@interface CRKKeychainProvider : NSObject {

	id<CRKKeychain> _keychain;

}

@property (nonatomic,readonly) id<CRKKeychain> keychain;              //@synthesize keychain=_keychain - In the implementation block
+(id)sharedProvider;
+(id)makeKeychainForCurrentEnvironment;
-(id<CRKKeychain>)keychain;
-(id)initWithKeychain:(id)arg1 ;
@end

