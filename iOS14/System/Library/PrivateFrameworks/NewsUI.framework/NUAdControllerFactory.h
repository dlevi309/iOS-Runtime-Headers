/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

