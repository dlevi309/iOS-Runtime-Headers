/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIImage.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIImageSymbolConfiguration;

@interface UIImageNibPlaceholder : UIImage <NSCoding> {

	NSString* runtimeResourceName;
	NSString* systemSymbolResourceName;
	long long _resourceRenderingMode;
	UIImageSymbolConfiguration* _resourceSymbolImageConfiguration;

}

@property (assign,nonatomic) long long resourceRenderingMode;                                          //@synthesize resourceRenderingMode=_resourceRenderingMode - In the implementation block
@property (nonatomic,copy) UIImageSymbolConfiguration * resourceSymbolImageConfiguration;              //@synthesize resourceSymbolImageConfiguration=_resourceSymbolImageConfiguration - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 andRuntimeResourceName:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 andRuntimeResourceName:(id)arg2 ;
-(long long)resourceRenderingMode;
-(id)initWithRuntimeSystemSymbolResourceName:(id)arg1 ;
-(void)setResourceRenderingMode:(long long)arg1 ;
-(UIImageSymbolConfiguration *)resourceSymbolImageConfiguration;
-(void)setResourceSymbolImageConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(id)_initWithOtherImage:(id)arg1 ;
@end

