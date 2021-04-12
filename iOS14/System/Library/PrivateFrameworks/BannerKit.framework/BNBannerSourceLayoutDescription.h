/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface BNBannerSourceLayoutDescription : NSObject <BSXPCSecureCoding> {

	CGSize _containerSize;
	CGSize _presentationSize;

}

@property (nonatomic,readonly) CGSize containerSize;                 //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) CGSize presentationSize;              //@synthesize presentationSize=_presentationSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)bannerSourceLayoutDescriptionWithPresentationSize:(CGSize)arg1 containerSize:(CGSize)arg2 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(CGSize)containerSize;
-(NSString *)description;
-(CGSize)presentationSize;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithPresentationSize:(CGSize)arg1 containerSize:(CGSize)arg2 ;
@end

