/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PHSettings.h>

@interface PHImageManagerSettings : PHSettings {

	BOOL _allowImageRequests;
	BOOL _allowCaching;

}

@property (assign,nonatomic) BOOL allowImageRequests;              //@synthesize allowImageRequests=_allowImageRequests - In the implementation block
@property (assign,nonatomic) BOOL allowCaching;                    //@synthesize allowCaching=_allowCaching - In the implementation block
+(id)sharedSettings;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)allowCaching;
-(BOOL)allowImageRequests;
-(void)setAllowImageRequests:(BOOL)arg1 ;
-(void)setAllowCaching:(BOOL)arg1 ;
@end

