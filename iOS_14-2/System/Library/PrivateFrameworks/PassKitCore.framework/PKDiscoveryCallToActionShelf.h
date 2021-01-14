/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)useImageAsTitle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PKDiscoveryCallToAction *)callToAction;
@end

