/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFMediaProfileContainer;
@class NSMutableSet, NSMapTable, NAFuture;

@interface HFDataAnalyticsLogItemProvider : HFItemProvider <NSCopying> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSMutableSet* _logItems;
	NSMapTable* _logEntryUniqueIdentifierToLogItemMap;
	NAFuture* _logFetchFuture;

}

@property (nonatomic,readonly) NSMutableSet * logItems;                                        //@synthesize logItems=_logItems - In the implementation block
@property (nonatomic,readonly) NSMapTable * logEntryUniqueIdentifierToLogItemMap;              //@synthesize logEntryUniqueIdentifierToLogItemMap=_logEntryUniqueIdentifierToLogItemMap - In the implementation block
@property (nonatomic,retain) NAFuture * logFetchFuture;                                        //@synthesize logFetchFuture=_logFetchFuture - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
+(BOOL)prefersNonBlockingReloads;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(NAFuture *)logFetchFuture;
-(NSMapTable *)logEntryUniqueIdentifierToLogItemMap;
-(NSMutableSet *)logItems;
-(void)setLogFetchFuture:(NAFuture *)arg1 ;
@end

