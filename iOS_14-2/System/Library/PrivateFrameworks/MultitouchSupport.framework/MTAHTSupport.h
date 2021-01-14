/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
*/


@class NSBundle;

@interface MTAHTSupport : NSObject {

	NSBundle* _bundle;
	Class _AHTDevice;

}

@property (retain) NSBundle * bundle;                      //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) Class AHTDevice;              //@synthesize AHTDevice=_AHTDevice - In the implementation block
+(id)allDevices;
+(id)sharedInstance;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(id)init;
-(Class)AHTDevice;
-(void)setAHTDevice:(Class)arg1 ;
@end

