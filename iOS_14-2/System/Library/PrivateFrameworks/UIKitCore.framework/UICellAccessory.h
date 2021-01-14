/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor, NSString;

@interface UICellAccessory : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hidden;
	long long _displayedState;
	double _reservedLayoutWidth;
	UIColor* _tintColor;
	UIColor* _backgroundColor;

}

@property (getter=_isSystemType,nonatomic,readonly) BOOL isSystemType; 
@property (getter=_systemType,nonatomic,readonly) long long systemType; 
@property (getter=_identifier,nonatomic,readonly) NSString * identifier; 
@property (setter=_setBackgroundColor:,getter=_backgroundColor,nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long displayedState;                                                                   //@synthesize displayedState=_displayedState - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                                //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) double reservedLayoutWidth;                                                                 //@synthesize reservedLayoutWidth=_reservedLayoutWidth - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                                        //@synthesize tintColor=_tintColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isHidden;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)init;
-(void)setReservedLayoutWidth:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)reservedLayoutWidth;
-(void)_setBackgroundColor:(id)arg1 ;
-(long long)displayedState;
-(id)_identifier;
-(long long)_systemTypePlacementForHeader:(BOOL)arg1 ;
-(void)setDisplayedState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)_systemType;
-(id)_backgroundColor;
-(BOOL)_isSystemType;
-(long long)_defaultPlacementForHeader:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
@end

