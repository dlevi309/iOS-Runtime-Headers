/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)contextID;
-(void)setContextID:(unsigned)arg1 ;
-(CGRect)frame;
-(unsigned)slotID;
-(void)setFrame:(CGRect)arg1 ;
-(id)portalView;
-(BOOL)representsPortal;
-(unsigned long long)renderID;
-(BOOL)hidesImage;
-(void)_configurePortalLayer:(id)arg1 ;
-(BOOL)ignoresAccessibilityFilters;
-(void)setIgnoresAccessibilityFilters:(BOOL)arg1 ;
-(void)setSlotID:(unsigned)arg1 ;
-(void)setRenderID:(unsigned long long)arg1 ;
-(void)setHidesImage:(BOOL)arg1 ;
@end

