/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)transparentIcon;
+(id)genericApplicationIcon;
+(id)layerUpdateQueue;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)applicationIcon;
+(id)genericDocumentIcon;
+(id)sizesFromSet:(unsigned long long)arg1 ;
+(LIIconVariantInfo*)variantInfoForSet:(unsigned long long)arg1 count:(unsigned long long*)arg2 ;
+(LIIconVariantInfo)variantInfoForVariant:(int)arg1 ;
+(int)findVariantFromSet:(unsigned long long)arg1 deviceIdiom:(unsigned long long)arg2 size:(CGSize)arg3 scale:(double)arg4 ;
-(id)initWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSArray *)decorations;
-(id<ISIconIdentity>)_identity;
-(void)displayLayer:(id)arg1 ;
-(ISIconManager *)manager;
-(double)_aspectRatio;
-(unsigned long long)variantOptions;
-(id)_init;
-(id)iconWithDecorations:(id)arg1 ;
-(unsigned long long)badgeOptions;
@end

