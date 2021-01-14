/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIImage;

@interface _UIPageIndicatorStoreObject : NSObject {

	UIImage* _customImage;
	long long _startIndex;
	long long _endIndex;

}

@property (nonatomic,retain) UIImage * customImage;              //@synthesize customImage=_customImage - In the implementation block
@property (assign,nonatomic) long long startIndex;               //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) long long endIndex;                 //@synthesize endIndex=_endIndex - In the implementation block
-(long long)startIndex;
-(long long)endIndex;
-(id)splitAtIndex:(long long)arg1 withImage:(id)arg2 ;
-(void)setStartIndex:(long long)arg1 ;
-(id)description;
-(void)setEndIndex:(long long)arg1 ;
-(void)setCustomImage:(UIImage *)arg1 ;
-(UIImage *)customImage;
-(id)initWithImage:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 ;
-(BOOL)validPageWithinBound:(long long)arg1 ;
@end

