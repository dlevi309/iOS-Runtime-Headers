/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol AMSBagProtocol;
@class NSString, NSNumber;

@interface ASDMediaClipTaskURLBuilder : NSObject {

	NSString* _bundleID;
	id<AMSBagProtocol> _bag;
	NSNumber* _externalVersionID;

}

@property (nonatomic,retain) NSNumber * externalVersionID;              //@synthesize externalVersionID=_externalVersionID - In the implementation block
-(id)build;
-(NSNumber *)externalVersionID;
-(id)_hostPromise;
-(id)_pathPromise;
-(id)_devicePlatform;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
-(id)_queryPromise;
-(id)initWithBundleID:(id)arg1 bag:(id)arg2 ;
@end

