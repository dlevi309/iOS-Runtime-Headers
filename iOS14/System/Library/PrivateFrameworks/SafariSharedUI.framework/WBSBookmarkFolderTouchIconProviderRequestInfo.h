/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)backgroundColors;
-(NSArray *)thumbnailImages;
-(NSSet *)subrequestTokens;
-(void)setSubrequestTokens:(NSSet *)arg1 ;
-(void)setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)hasScheduledCoalescedUpdate;
-(void)setHasScheduledCoalescedUpdate:(BOOL)arg1 ;
@end

