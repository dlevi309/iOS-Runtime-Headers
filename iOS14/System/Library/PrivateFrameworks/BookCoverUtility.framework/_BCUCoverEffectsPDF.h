/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/

#import <BookCoverUtility/BookCoverUtility-Structs.h>
#import <libobjc.A.dylib/BCUBookCoverEffectsFilter.h>
#import <libobjc.A.dylib/BCUImageFilter.h>

@class BCULayerRenderer, NSString;

@interface _BCUCoverEffectsPDF : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter> {

	BCULayerRenderer* _renderer;
	BOOL _image;
	BOOL _shadow;
	BOOL _night;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(id)newOperationWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 waitForCPUSynchronization:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(id)coverLayerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 ;
-(id)shadowLayerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4 ;
-(UIEdgeInsets)_roundedInsetsWithSize:(CGSize)arg1 ;
-(id)_layerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 scale:(double)arg3 minificationFilter:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 renderer:(id)arg2 image:(BOOL)arg3 shadow:(BOOL)arg4 night:(BOOL)arg5 ;
@end

