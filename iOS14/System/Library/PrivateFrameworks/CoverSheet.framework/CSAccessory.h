/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


#import <CoverSheet/CoverSheet-Structs.h>
@class NSString, UIColor;

@interface CSAccessory : NSObject {

	NSString* _endpointUUID;
	long long _type;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;

}

@property (nonatomic,retain) NSString * endpointUUID;                          //@synthesize endpointUUID=_endpointUUID - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                           //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                         //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,readonly) BOOL shouldLockScreenWhenAttached; 
@property (nonatomic,readonly) BOOL shouldDelayAnimation; 
@property (nonatomic,readonly) BOOL shouldShowAnimation; 
@property (nonatomic,readonly) BOOL chimeOnDetach; 
@property (nonatomic,readonly) BOOL hasStaticView; 
@property (getter=isWindowed,nonatomic,readonly) BOOL windowed; 
@property (nonatomic,readonly) CGRect visibleScreenCoordinates; 
+(id)accessoryWithType:(long long)arg1 primaryColor:(id)arg2 secondoryColor:(id)arg3 ;
-(id)accessoryTypeString;
-(UIColor *)secondaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 endpointUUID:(id)arg2 ;
-(long long)type;
-(UIColor *)primaryColor;
-(NSString *)endpointUUID;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(BOOL)isWindowed;
-(BOOL)shouldShowAnimation;
-(CGRect)visibleScreenCoordinates;
-(BOOL)shouldLockScreenWhenAttached;
-(BOOL)shouldDelayAnimation;
-(BOOL)chimeOnDetach;
-(void)setEndpointUUID:(NSString *)arg1 ;
-(BOOL)hasStaticView;
-(long long)accessoryTypeFromDictionary:(id)arg1 ;
-(id)colorForP3ColorData:(id)arg1 ;
@end

