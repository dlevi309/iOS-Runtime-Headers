/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/

#import <BookCoverUtility/BookCoverUtility-Structs.h>
#import <libobjc.A.dylib/BCUSeriesCoverEffectsFilter.h>

@class NSString, BCULayerRenderer;

@interface _BCUCoverEffectsSeriesStack : NSObject <BCUSeriesCoverEffectsFilter> {

	NSString* _identifier;
	BCULayerRenderer* _renderer;

}

@property (nonatomic,readonly) BCULayerRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BCULayerRenderer *)renderer;
-(NSString *)identifier;
-(id)_stackLayerWithImages:(id)arg1 filters:(id)arg2 size:(CGSize)arg3 contentsScale:(double)arg4 insets:(UIEdgeInsets*)arg5 path:(const CGPath*)arg6 ;
-(id)newOperationWithImages:(id)arg1 filters:(id)arg2 size:(CGSize)arg3 contentsScale:(double)arg4 waitForCPUSynchronization:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithIdentifier:(id)arg1 renderer:(id)arg2 ;
@end

