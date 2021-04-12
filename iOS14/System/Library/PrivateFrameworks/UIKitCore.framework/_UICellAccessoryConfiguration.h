/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor, NSString;

@interface _UICellAccessoryConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usesDefaultLayoutWidth;
	UIColor* _tintColor;
	UIColor* _backgroundColor;

}

@property (getter=_isSystemType,nonatomic,readonly) BOOL isSystemType; 
@property (getter=_systemType,nonatomic,readonly) long long systemType; 
@property (getter=_identifier,nonatomic,readonly) NSString * identifier; 
@property (setter=_setBackgroundColor:,getter=_backgroundColor,nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL usesDefaultLayoutWidth;                                                                //@synthesize usesDefaultLayoutWidth=_usesDefaultLayoutWidth - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                                        //@synthesize tintColor=_tintColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setBackgroundColor:(id)arg1 ;
-(id)_identifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)_systemType;
-(id)_backgroundColor;
-(BOOL)_isSystemType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)usesDefaultLayoutWidth;
-(void)setUsesDefaultLayoutWidth:(BOOL)arg1 ;
@end

