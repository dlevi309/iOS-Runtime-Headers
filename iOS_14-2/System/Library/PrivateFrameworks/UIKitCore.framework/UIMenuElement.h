/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding> {

	NSString* _accessibilityIdentifier;
	NSString* _title;
	NSString* _imageName;
	UIImage* _imageIfLoaded;

}

@property (nonatomic,readonly) BOOL isLeaf; 
@property (nonatomic,readonly) BOOL isLoadingPlaceholder; 
@property (nonatomic,readonly) NSString * imageName;                   //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) UIImage * imageIfLoaded;                //@synthesize imageIfLoaded=_imageIfLoaded - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
+(BOOL)supportsSecureCoding;
-(void)_setTitle:(id)arg1 ;
-(id)_mutableCopy;
-(BOOL)isLeaf;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)imageName;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(UIImage *)image;
-(BOOL)_isVisible;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 ;
-(void)_setImage:(id)arg1 ;
-(id)_immutableCopy;
-(void)setAccessibilityIdentifier:(id)arg1 ;
-(BOOL)_isInlineGroup;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_canBeHighlighted;
-(BOOL)isLoadingPlaceholder;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(UIImage *)imageIfLoaded;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(id)accessibilityIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

