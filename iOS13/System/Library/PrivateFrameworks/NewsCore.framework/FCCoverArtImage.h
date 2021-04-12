/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSURL;

@interface FCCoverArtImage : NSObject {

	NSURL* _URL;
	CGSize _dimensions;

}

@property (nonatomic,readonly) CGSize dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                    //@synthesize URL=_URL - In the implementation block
-(NSURL *)URL;
-(CGSize)dimensions;
-(id)initWithDimensions:(CGSize)arg1 URL:(id)arg2 ;
@end

