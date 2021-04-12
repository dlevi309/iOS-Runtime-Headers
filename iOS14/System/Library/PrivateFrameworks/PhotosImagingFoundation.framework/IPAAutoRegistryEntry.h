/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/


@interface IPAAutoRegistryEntry : NSObject {

	BOOL _persistable;
	Class _autoSettingsClass;

}

@property (nonatomic,retain) Class autoSettingsClass;              //@synthesize autoSettingsClass=_autoSettingsClass - In the implementation block
@property (assign,nonatomic) BOOL persistable;                     //@synthesize persistable=_persistable - In the implementation block
-(Class)autoSettingsClass;
-(void)setAutoSettingsClass:(Class)arg1 ;
-(BOOL)persistable;
-(void)setPersistable:(BOOL)arg1 ;
@end

