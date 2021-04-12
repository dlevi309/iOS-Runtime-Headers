/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString;

@interface PPMeCardCache : NSObject {

	NSString* _path;

}
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(BOOL)deleteMeCardCache;
-(BOOL)writeMeCardCache:(id)arg1 ;
-(id)loadMeCardCache;
-(id)_dateComponentsFromCachedDateComponents:(id)arg1 ;
-(id)_cachedDateComponentsFromDateComponents:(id)arg1 ;
@end

