/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdControllerFactory.h>

@protocol NUAdControllerFactory <NSObject>
@required
-(id)createAdControllerForProvider:(id)arg1 document:(id)arg2 viewport:(id)arg3;

@end


@protocol NUAdSettings;
@class NSString;

@interface NUAdControllerFactory : NSObject <NUAdControllerFactory> {

	id<NUAdSettings> _settings;

}

@property (nonatomic,readonly) id<NUAdSettings> settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSettings:(id)arg1 ;
-(id<NUAdSettings>)settings;
-(id)createAdControllerForProvider:(id)arg1 document:(id)arg2 viewport:(id)arg3 ;
@end

