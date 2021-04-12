/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBatteryEntry : _UIStatusBarDataEntry {

	BOOL _saverModeActive;
	BOOL _prominentlyShowsDetailString;
	long long _capacity;
	long long _state;
	NSString* _detailString;

}

@property (assign,nonatomic) long long capacity;                             //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL saverModeActive;                           //@synthesize saverModeActive=_saverModeActive - In the implementation block
@property (assign,nonatomic) BOOL prominentlyShowsDetailString;              //@synthesize prominentlyShowsDetailString=_prominentlyShowsDetailString - In the implementation block
@property (nonatomic,copy) NSString * detailString;                          //@synthesize detailString=_detailString - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCapacity:(long long)arg1 ;
-(BOOL)prominentlyShowsDetailString;
-(id)_ui_descriptionBuilder;
-(BOOL)saverModeActive;
-(void)setSaverModeActive:(BOOL)arg1 ;
-(long long)capacity;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)detailString;
-(void)setDetailString:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setProminentlyShowsDetailString:(BOOL)arg1 ;
@end

