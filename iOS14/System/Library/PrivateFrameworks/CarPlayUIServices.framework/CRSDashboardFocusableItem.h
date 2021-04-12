/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CRSUIDashboardFocusableItemProviding;
@class NSUUID, UIView;

@interface CRSDashboardFocusableItem : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	UIView*<CRSUIDashboardFocusableItemProviding> _focusProvidingItem;
	CGRect _frameInWindow;

}

@property (nonatomic,retain) NSUUID * identifier;                                                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGRect frameInWindow;                                                                 //@synthesize frameInWindow=_frameInWindow - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CRSUIDashboardFocusableItemProviding> focusProvidingItem;              //@synthesize focusProvidingItem=_focusProvidingItem - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)setFrameInWindow:(CGRect)arg1 ;
-(CGRect)frameInWindow;
-(id)initWithFocusableView:(id)arg1 ;
-(UIView*<CRSUIDashboardFocusableItemProviding>)focusProvidingItem;
-(void)setFocusProvidingItem:(UIView*<CRSUIDashboardFocusableItemProviding>)arg1 ;
@end

