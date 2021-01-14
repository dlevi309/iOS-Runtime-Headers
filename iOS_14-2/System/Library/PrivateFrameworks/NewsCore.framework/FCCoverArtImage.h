/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)dimensions;
-(id)initWithDimensions:(CGSize)arg1 URL:(id)arg2 ;
-(NSURL *)URL;
@end

