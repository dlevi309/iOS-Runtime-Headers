/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)capacity;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setCapacity:(long long)arg1 ;
-(id)_ui_descriptionBuilder;
-(NSString *)detailString;
-(BOOL)saverModeActive;
-(void)setSaverModeActive:(BOOL)arg1 ;
-(BOOL)prominentlyShowsDetailString;
-(void)setProminentlyShowsDetailString:(BOOL)arg1 ;
-(void)setDetailString:(NSString *)arg1 ;
@end

