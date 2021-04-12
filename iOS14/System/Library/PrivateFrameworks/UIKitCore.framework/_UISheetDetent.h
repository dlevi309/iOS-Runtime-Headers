/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UISheetDetent : NSObject <NSSecureCoding> {

	long long __identifier;
	/*^block*/id __internalBlock;
	double __constant;

}

@property (nonatomic,readonly) long long _identifier;              //@synthesize _identifier=__identifier - In the implementation block
@property (nonatomic,readonly) id _internalBlock;                  //@synthesize _internalBlock=__internalBlock - In the implementation block
@property (nonatomic,readonly) double _constant;                   //@synthesize _constant=__constant - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_largeDetent;
+(id)_constantDetent:(double)arg1 ;
+(id)_detentWithContainerViewBlock:(/*^block*/id)arg1 ;
+(id)_mediumDetent;
-(id)_internalBlock;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_constant;
-(id)description;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(long long)_identifier;
-(double)_resolvedOffsetInContainerView:(id)arg1 fullHeightFrameOfPresentedView:(CGRect)arg2 bottomAttached:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(long long)arg1 internalBlock:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

