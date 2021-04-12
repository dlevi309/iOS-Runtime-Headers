/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class NSString;

@interface _LSInstallationOperation : NSObject {

	NSString* _bundleID;
	long long _installType;
	/*^block*/id _block;
	BOOL _claimed;

}

@property (nonatomic,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) long long installType;              //@synthesize installType=_installType - In the implementation block
@property (nonatomic,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL claimed;                         //@synthesize claimed=_claimed - In the implementation block
-(id)description;
-(id)redactedDescription;
-(id)block;
-(long long)installType;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 installType:(long long)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)claimed;
-(void)setClaimed:(BOOL)arg1 ;
@end

