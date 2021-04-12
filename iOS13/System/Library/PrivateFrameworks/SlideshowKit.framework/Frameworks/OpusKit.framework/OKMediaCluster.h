/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSString, NSMutableArray;

@interface OKMediaCluster : NSObject {

	NSString* _title;
	NSMutableArray* _items;
	BOOL _isUnknown;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL isUnknown;                               //@synthesize isUnknown=_isUnknown - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(BOOL)isUnknown;
-(id)uniqueURLs;
-(void)setIsUnknown:(BOOL)arg1 ;
@end

