/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateForVerticalScroll;
	BOOL _sectioningIsPreserved;
	BOOL _samplingIsPreserved;
	BOOL _invalidationHasBeenRedispatched;

}

@property (assign,nonatomic) BOOL invalidateForVerticalScroll;                  //@synthesize invalidateForVerticalScroll=_invalidateForVerticalScroll - In the implementation block
@property (assign,nonatomic) BOOL sectioningIsPreserved;                        //@synthesize sectioningIsPreserved=_sectioningIsPreserved - In the implementation block
@property (assign,nonatomic) BOOL samplingIsPreserved;                          //@synthesize samplingIsPreserved=_samplingIsPreserved - In the implementation block
@property (assign,nonatomic) BOOL invalidationHasBeenRedispatched;              //@synthesize invalidationHasBeenRedispatched=_invalidationHasBeenRedispatched - In the implementation block
-(id)description;
-(BOOL)invalidateForVerticalScroll;
-(void)setSamplingIsPreserved:(BOOL)arg1 ;
-(void)setSectioningIsPreserved:(BOOL)arg1 ;
-(void)setInvalidateForVerticalScroll:(BOOL)arg1 ;
-(BOOL)sectioningIsPreserved;
-(void)setInvalidationHasBeenRedispatched:(BOOL)arg1 ;
-(BOOL)invalidationHasBeenRedispatched;
-(BOOL)samplingIsPreserved;
@end

