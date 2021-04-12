/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem {

	FMFLocation* _lastKnownLocation;

}

@property (nonatomic,retain) FMFLocation * lastKnownLocation;               //@synthesize lastKnownLocation=_lastKnownLocation - In the implementation block
@property (nonatomic,readonly) long long offerState; 
@property (nonatomic,__weak,readonly) IMHandle * sender; 
@property (nonatomic,__weak,readonly) NSString * titleText; 
@property (nonatomic,__weak,readonly) NSString * locationText; 
+(id)placeholderPreviewCache;
+(id)titleBarMaskImageForWidth:(double)arg1 ;
-(void)dealloc;
-(id)time;
-(IMHandle *)sender;
-(BOOL)failed;
-(NSString *)titleText;
-(BOOL)isFromMe;
-(id)previewURL;
-(NSString *)locationText;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(void)_handleLocationDidChangeNotification:(id)arg1 ;
-(void)setLastKnownLocation:(FMFLocation *)arg1 ;
-(long long)offerState;
-(FMFLocation *)lastKnownLocation;
-(id)_previewCacheKey:(unsigned long long)arg1 ;
-(id)previewURLForWidth:(unsigned long long)arg1 ;
-(id)savedPreviewFromURL:(id)arg1 ;
-(id)_desaturatedImageForImage:(id)arg1 ;
-(id)_placeholderCacheKey;
-(id)_generatePlaceholderThumbnailFillToSize:(CGSize)arg1 ;
-(void)_generateMapPreview;
-(BOOL)shouldUpdatePreviewWithLocation:(id)arg1 lastKnownLocation:(id)arg2 previewURL:(id)arg3 ;
-(id)transcriptTraitCollection;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 withCoordinate:(CLLocationCoordinate2D)arg3 forState:(long long)arg4 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 ;
-(id)modificationDateForPreview:(id)arg1 ;
-(Class)balloonViewClass;
-(void)configureBalloonView:(id)arg1 ;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
@end

