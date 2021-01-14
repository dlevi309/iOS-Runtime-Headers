/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AKPageController;

@interface AKFormFeature : NSObject <NSCopying> {

	AKPageController* _page;
	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                                 //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic,__weak) AKPageController * page;              //@synthesize page=_page - In the implementation block
+(id)featureWithRect:(CGRect)arg1 onPage:(id)arg2 ;
-(void)setPage:(AKPageController *)arg1 ;
-(AKPageController *)page;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 ;
@end

