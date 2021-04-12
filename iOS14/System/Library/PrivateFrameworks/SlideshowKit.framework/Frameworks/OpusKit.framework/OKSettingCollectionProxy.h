/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString;

@interface OKSettingCollectionProxy : NSObject <OKSettingsSupport> {

	id _listOfObjects;
	/*^block*/id _keyResolverBlock;
	NSString* _keyPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)initWithObjects:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithObjects:(id)arg1 withKeyPath:(id)arg2 ;
@end

