/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICellAccessoryConfiguration.h>

@class UIView;

@interface _UICellAccessoryConfigurationCustomView : _UICellAccessoryConfiguration {

	BOOL _maintainsFixedSize;
	UIView* _customView;

}

@property (nonatomic,readonly) UIView * customView;                //@synthesize customView=_customView - In the implementation block
@property (assign,nonatomic) BOOL maintainsFixedSize;              //@synthesize maintainsFixedSize=_maintainsFixedSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(UIView *)customView;
-(id)_identifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCustomView:(id)arg1 ;
-(BOOL)_isSystemType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)maintainsFixedSize;
-(void)setMaintainsFixedSize:(BOOL)arg1 ;
@end

