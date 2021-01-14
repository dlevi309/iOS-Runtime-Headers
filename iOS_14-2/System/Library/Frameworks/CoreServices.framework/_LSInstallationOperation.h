/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)claimed;
-(long long)installType;
-(void)setClaimed:(BOOL)arg1 ;
-(id)initWithBundleID:(id)arg1 installType:(long long)arg2 block:(/*^block*/id)arg3 ;
-(id)block;
-(id)description;
-(NSString *)bundleID;
-(id)redactedDescription;
@end

