/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue, MKCuratedCollectionsSyncCoordinator;
#import <MapKit/MapKit-Structs.h>
@class NSRelativeDateTimeFormatter, UIFont, UIImage, NSObject, UIColor, NSAttributedString, GEOPlaceCollection;

@interface MKPlaceCollectionViewModel : NSObject {

	NSRelativeDateTimeFormatter* _collectionDateFormatter;
	long long _context;
	UIFont* _titleFont;
	UIImage* _collectionImage;
	NSObject*<OS_dispatch_queue> _publisherLogoImageQueue;
	BOOL _isSaved;
	BOOL _shouldDisplayMetadata;
	UIColor* _backgroundColor;
	NSAttributedString* _collectionTitle;
	NSAttributedString* _secondaryCollectionTitle;
	GEOPlaceCollection* _placeCollection;
	id<MKCuratedCollectionsSyncCoordinator> _syncCoordinator;
	UIImage* _publisherLogoImage;
	CGSize _photoSize;

}

@property (nonatomic,retain) GEOPlaceCollection * placeCollection;                                 //@synthesize placeCollection=_placeCollection - In the implementation block
@property (nonatomic,retain) id<MKCuratedCollectionsSyncCoordinator> syncCoordinator;              //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (assign,nonatomic) CGSize photoSize;                                                     //@synthesize photoSize=_photoSize - In the implementation block
@property (retain) UIImage * publisherLogoImage;                                                   //@synthesize publisherLogoImage=_publisherLogoImage - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * collectionTitle;                                 //@synthesize collectionTitle=_collectionTitle - In the implementation block
@property (nonatomic,retain) NSAttributedString * secondaryCollectionTitle;                        //@synthesize secondaryCollectionTitle=_secondaryCollectionTitle - In the implementation block
@property (assign,nonatomic) BOOL isSaved;                                                         //@synthesize isSaved=_isSaved - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayMetadata;                                           //@synthesize shouldDisplayMetadata=_shouldDisplayMetadata - In the implementation block
-(void)setPhotoSize:(CGSize)arg1 ;
-(id<MKCuratedCollectionsSyncCoordinator>)syncCoordinator;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(NSAttributedString *)collectionTitle;
-(UIColor *)backgroundColor;
-(void)setPlaceCollection:(GEOPlaceCollection *)arg1 ;
-(void)setIsSaved:(BOOL)arg1 ;
-(UIImage *)publisherLogoImage;
-(void)setPublisherLogoImage:(UIImage *)arg1 ;
-(NSAttributedString *)secondaryCollectionTitle;
-(id)initWithGEOPlaceCollection:(id)arg1 usingSyncCoordinator:(id)arg2 inContext:(long long)arg3 usingTitleFont:(id)arg4 usingFormatter:(id)arg5 ;
-(BOOL)shouldDisplayMetadata;
-(void)publisherLogoImageWithCompletion:(/*^block*/id)arg1 ;
-(void)setCollectionTitle:(NSAttributedString *)arg1 ;
-(BOOL)isSaved;
-(void)setSecondaryCollectionTitle:(NSAttributedString *)arg1 ;
-(void)setShouldDisplayMetadata:(BOOL)arg1 ;
-(void)setSyncCoordinator:(id<MKCuratedCollectionsSyncCoordinator>)arg1 ;
-(void)collectionImageForSize:(CGSize)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)cancelCollectionImageDownload;
-(CGSize)photoSize;
-(GEOPlaceCollection *)placeCollection;
@end

