/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXLayoutGenerator.h>

@class PXMemoriesFeedLayoutMetrics;

@interface PXMemoriesFeedLayoutGenerator : PXLayoutGenerator {

	BOOL _includeDateHeader;
	BOOL _isFirstHeader;

}

@property (assign,nonatomic) BOOL includeDateHeader;                           //@synthesize includeDateHeader=_includeDateHeader - In the implementation block
@property (assign,nonatomic) BOOL isFirstHeader;                               //@synthesize isFirstHeader=_isFirstHeader - In the implementation block
@property (nonatomic,copy) PXMemoriesFeedLayoutMetrics * metrics; 
-(id)initWithMetrics:(id)arg1 ;
-(BOOL)includeDateHeader;
-(void)setIncludeDateHeader:(BOOL)arg1 ;
-(BOOL)isFirstHeader;
-(void)setIsFirstHeader:(BOOL)arg1 ;
@end

