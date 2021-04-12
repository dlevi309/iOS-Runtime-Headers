/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class NSString;

@interface WLSafeHarborDirectory : NSObject {

	NSString* _bundleID;
	NSString* _path;
	NSString* _infoPath;
	NSString* _androidContentPath;

}

@property (nonatomic,copy) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * infoPath;                        //@synthesize infoPath=_infoPath - In the implementation block
@property (nonatomic,copy) NSString * androidContentPath;              //@synthesize androidContentPath=_androidContentPath - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(NSString *)bundleID;
-(NSString *)infoPath;
-(void)setInfoPath:(NSString *)arg1 ;
-(NSString *)androidContentPath;
-(void)setAndroidContentPath:(NSString *)arg1 ;
@end

