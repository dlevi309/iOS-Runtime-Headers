/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FCCurrentAudioContent : NSObject <NSCopying> {

	NSArray* _recentHeadlines;
	NSArray* _featuredHeadlines;

}

@property (nonatomic,copy,readonly) NSArray * recentHeadlines;                //@synthesize recentHeadlines=_recentHeadlines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * featuredHeadlines;              //@synthesize featuredHeadlines=_featuredHeadlines - In the implementation block
-(NSArray *)recentHeadlines;
-(NSArray *)featuredHeadlines;
-(id)initWithRecentHeadlines:(id)arg1 featuredHeadlines:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

