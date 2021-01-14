/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXLayoutPerformerOutput : NSObject {

	CGRect* _layoutRects;
	long long _capacity;
	long long _lastIndex;

}

@property (nonatomic,readonly) long long count; 
-(long long)count;
-(id)initWithCapacity:(long long)arg1 ;
-(void)appendLayoutRect:(CGRect)arg1 ;
-(void)removeAllRects;
-(CGRect)layoutRectAtIndex:(long long)arg1 ;
-(void)dealloc;
@end

