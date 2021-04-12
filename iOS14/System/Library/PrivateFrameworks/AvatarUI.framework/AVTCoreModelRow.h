/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class NSString, AVTCoreModelRowOptions, AVTCoreModelPairing;


@protocol AVTCoreModelRow <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) AVTCoreModelRowOptions * options; 
@property (nonatomic,copy,readonly) AVTCoreModelPairing * pairing; 
@required
-(AVTCoreModelPairing *)pairing;
-(AVTCoreModelRowOptions *)options;
-(NSString *)identifier;
-(NSString *)title;

@end

