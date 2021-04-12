/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NULayoutContext.h>
@class UITraitCollection;


@protocol NULayoutContext <NSObject>
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@property (nonatomic,readonly) CGRect bounds; 
@required
-(CGRect)bounds;
-(UITraitCollection *)traitCollection;
-(BOOL)isLandscape;

@end


@class UITraitCollection, NSString;

@interface NULayoutContext : NSObject <NULayoutContext> {

	UITraitCollection* _traitCollection;
	CGRect _bounds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@property (nonatomic,readonly) CGRect bounds;                                    //@synthesize bounds=_bounds - In the implementation block
-(NSString *)description;
-(CGRect)bounds;
-(UITraitCollection *)traitCollection;
-(BOOL)isLandscape;
-(id)initWithTraitCollection:(id)arg1 bounds:(CGRect)arg2 ;
@end

