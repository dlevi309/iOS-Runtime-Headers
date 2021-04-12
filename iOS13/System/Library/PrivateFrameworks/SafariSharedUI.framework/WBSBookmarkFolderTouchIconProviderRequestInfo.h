/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSMutableArray, NSSet, NSArray;

@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject {

	NSMutableArray* _thumbnailImages;
	NSMutableArray* _backgroundColors;
	BOOL _hasScheduledCoalescedUpdate;
	NSSet* _subrequestTokens;

}

@property (nonatomic,copy) NSSet * subrequestTokens;                         //@synthesize subrequestTokens=_subrequestTokens - In the implementation block
@property (nonatomic,copy,readonly) NSArray * thumbnailImages; 
@property (nonatomic,copy,readonly) NSArray * backgroundColors; 
@property (assign,nonatomic) BOOL hasScheduledCoalescedUpdate;               //@synthesize hasScheduledCoalescedUpdate=_hasScheduledCoalescedUpdate - In the implementation block
-(id)init;
-(NSArray *)thumbnailImages;
-(NSArray *)backgroundColors;
-(NSSet *)subrequestTokens;
-(void)setSubrequestTokens:(NSSet *)arg1 ;
-(void)setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)hasScheduledCoalescedUpdate;
-(void)setHasScheduledCoalescedUpdate:(BOOL)arg1 ;
@end

