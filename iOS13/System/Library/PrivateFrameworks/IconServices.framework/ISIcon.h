/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString, ISIconManager, NSArray;

@interface ISIcon : NSObject <ISScalableCompositorResource, CALayerDelegate>

@property (readonly) id<ISIconIdentity> _identity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) ISIconManager * manager; 
@property (nonatomic,readonly) NSArray * decorations; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)applicationIcon;
+(id)genericDocumentIcon;
+(id)genericApplicationIcon;
+(id)transparentIcon;
+(id)layerUpdateQueue;
+(LIIconVariantInfo*)variantInfoForSet:(unsigned long long)arg1 count:(unsigned long long*)arg2 ;
+(int)findVariantFromSet:(unsigned long long)arg1 deviceIdiom:(unsigned long long)arg2 size:(CGSize)arg3 scale:(double)arg4 ;
+(id)sizesFromSet:(unsigned long long)arg1 ;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(id)initWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(id)_init;
-(ISIconManager *)manager;
-(id<ISIconIdentity>)_identity;
-(void)displayLayer:(id)arg1 ;
-(NSArray *)decorations;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(double)_aspectRatio;
-(unsigned long long)variantOptions;
-(unsigned long long)badgeOptions;
-(id)iconWithDecorations:(id)arg1 ;
@end

