/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedDescriptor.h>
#import <libobjc.A.dylib/FCFeedPaginating.h>

@class NSString;

@interface FCGreatStoriesYouMissedFeedDescriptor : FCFeedDescriptor <FCFeedPaginating> {

	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setupDebug;
+(void)tearDownDebug;
-(id)name;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)allEmitterClasses;
-(id)feedPaginator;
-(id)editionAtDate:(id)arg1 ;
-(id)editionFollowingEdition:(id)arg1 ;
@end

