/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)allowImageRequests;
-(void)setAllowImageRequests:(BOOL)arg1 ;
-(BOOL)allowCaching;
-(void)setAllowCaching:(BOOL)arg1 ;
@end

