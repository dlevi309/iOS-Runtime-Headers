/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _DUIImageComponent : NSObject <NSSecureCoding> {

	BOOL _ignoresAccessibilityFilters;
	BOOL _hidesImage;
	unsigned _slotID;
	unsigned _contextID;
	unsigned long long _renderID;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                                  //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) BOOL ignoresAccessibilityFilters;              //@synthesize ignoresAccessibilityFilters=_ignoresAccessibilityFilters - In the implementation block
@property (assign,nonatomic) unsigned slotID;                               //@synthesize slotID=_slotID - In the implementation block
@property (assign,nonatomic) unsigned long long renderID;                   //@synthesize renderID=_renderID - In the implementation block
@property (assign,nonatomic) unsigned contextID;                            //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) BOOL representsPortal; 
@property (assign,nonatomic) BOOL hidesImage;                               //@synthesize hidesImage=_hidesImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)slotID;
-(BOOL)hidesImage;
-(void)setHidesImage:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(unsigned long long)renderID;
-(id)description;
-(void)setContextID:(unsigned)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)representsPortal;
-(unsigned)contextID;
-(id)portalView;
-(void)setSlotID:(unsigned)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setRenderID:(unsigned long long)arg1 ;
-(void)_configurePortalLayer:(id)arg1 ;
-(BOOL)ignoresAccessibilityFilters;
-(void)setIgnoresAccessibilityFilters:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

