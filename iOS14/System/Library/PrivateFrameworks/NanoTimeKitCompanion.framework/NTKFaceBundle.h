/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSString;

@interface NTKFaceBundle : NSObject

@property (nonatomic,readonly) Class faceClass; 
@property (nonatomic,readonly) Class faceViewClass; 
@property (nonatomic,readonly) NSString * galleryDescriptionText; 
@property (nonatomic,readonly) NSString * galleryTitle; 
+(id)identifier;
+(id)imageWithName:(id)arg1 ;
+(id)localizedStringForKey:(id)arg1 table:(id)arg2 comment:(id)arg3 ;
+(id)logCategoryName;
+(id)localizedStringForKey:(id)arg1 comment:(id)arg2 ;
+(id)logObject;
-(Class)faceClass;
-(Class)faceViewClass;
-(id)defaultFaceForDevice:(id)arg1 ;
-(id)galleryFacesForDevice:(id)arg1 ;
-(NSString *)galleryTitle;
-(NSString *)galleryDescriptionText;
-(id)heroFacesForDevice:(id)arg1 ;
-(BOOL)isHardwareSpecific;
@end

