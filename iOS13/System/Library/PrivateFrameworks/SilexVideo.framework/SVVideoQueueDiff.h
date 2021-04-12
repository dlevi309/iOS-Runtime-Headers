/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoQueueDiff.h>
@class NSOrderedSet;


@protocol SVVideoQueueDiff <NSObject>
@property (nonatomic,readonly) NSOrderedSet * videosToInsert; 
@property (nonatomic,readonly) NSOrderedSet * videosToRemove; 
@required
-(NSOrderedSet *)videosToInsert;
-(NSOrderedSet *)videosToRemove;

@end


@class NSOrderedSet, NSString;

@interface SVVideoQueueDiff : NSObject <SVVideoQueueDiff> {

	NSOrderedSet* _videosToInsert;
	NSOrderedSet* _videosToRemove;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSOrderedSet * videosToInsert;              //@synthesize videosToInsert=_videosToInsert - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * videosToRemove;              //@synthesize videosToRemove=_videosToRemove - In the implementation block
-(id)initWithVideosToInsert:(id)arg1 videosToRemove:(id)arg2 ;
-(NSOrderedSet *)videosToInsert;
-(NSOrderedSet *)videosToRemove;
@end

