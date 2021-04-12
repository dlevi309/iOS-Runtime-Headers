/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDiscoveryShelf.h>

@class PKDiscoveryCallToAction;

@interface PKDiscoveryCallToActionShelf : PKDiscoveryShelf {

	BOOL _useImageAsTitle;
	PKDiscoveryCallToAction* _callToAction;

}

@property (nonatomic,readonly) PKDiscoveryCallToAction * callToAction;              //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,readonly) BOOL useImageAsTitle;                                //@synthesize useImageAsTitle=_useImageAsTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(PKDiscoveryCallToAction *)callToAction;
-(BOOL)useImageAsTitle;
@end

