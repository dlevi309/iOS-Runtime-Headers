/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMapTable, NSArray;

@interface PXLayoutPageMap : NSObject {

	NSMapTable* _pageMap;
	NSArray* _sources;
	CGRect _contentRect;

}
-(id)description;
-(id)sourcesFromRect:(CGRect)arg1 ;
-(id)initWithSources:(id)arg1 contentRect:(CGRect)arg2 ;
-(void)_mapSources:(id)arg1 ;
-(id)_screenPageForPoint:(CGPoint)arg1 ;
@end

