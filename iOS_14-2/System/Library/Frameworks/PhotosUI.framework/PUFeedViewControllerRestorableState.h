/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSArray, NSURL;

@interface PUFeedViewControllerRestorableState : NSObject <NSCoding> {

	BOOL _scrolledToNewest;
	NSDate* _date;
	NSArray* _centerAssetUUIDs;
	NSArray* _centerAssetFrames;
	NSURL* _centerSectionEntryURIRepresentation;
	CGSize _collectionViewSize;
	CGRect _centerSectionFrame;

}

@property (nonatomic,copy) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL scrolledToNewest;                                  //@synthesize scrolledToNewest=_scrolledToNewest - In the implementation block
@property (nonatomic,copy) NSArray * centerAssetUUIDs;                               //@synthesize centerAssetUUIDs=_centerAssetUUIDs - In the implementation block
@property (nonatomic,copy) NSArray * centerAssetFrames;                              //@synthesize centerAssetFrames=_centerAssetFrames - In the implementation block
@property (nonatomic,copy) NSURL * centerSectionEntryURIRepresentation;              //@synthesize centerSectionEntryURIRepresentation=_centerSectionEntryURIRepresentation - In the implementation block
@property (assign,nonatomic) CGRect centerSectionFrame;                              //@synthesize centerSectionFrame=_centerSectionFrame - In the implementation block
@property (assign,nonatomic) CGSize collectionViewSize;                              //@synthesize collectionViewSize=_collectionViewSize - In the implementation block
-(NSArray *)centerAssetFrames;
-(CGRect)centerSectionFrame;
-(NSURL *)centerSectionEntryURIRepresentation;
-(CGSize)collectionViewSize;
-(NSArray *)centerAssetUUIDs;
-(void)setCollectionViewSize:(CGSize)arg1 ;
-(void)setCenterSectionFrame:(CGRect)arg1 ;
-(void)setCenterSectionEntryURIRepresentation:(NSURL *)arg1 ;
-(void)setCenterAssetFrames:(NSArray *)arg1 ;
-(void)setCenterAssetUUIDs:(NSArray *)arg1 ;
-(void)setScrolledToNewest:(BOOL)arg1 ;
-(BOOL)scrolledToNewest;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
@end

