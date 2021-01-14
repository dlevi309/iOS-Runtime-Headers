/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLItemThumbnailGeneratorProtocolInternal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, QLItemThumbnailGenerator, QLItem, NSString;

@interface QLSingleItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocolInternal, NSSecureCoding> {

	UIImage* _thumbnail;
	CGSize _thumbnailSize;
	BOOL _isRepresentative;
	QLItemThumbnailGenerator* _thumbnailGenerator;
	QLItem* _item;

}

@property (nonatomic,retain) QLItemThumbnailGenerator * thumbnailGenerator;              //@synthesize thumbnailGenerator=_thumbnailGenerator - In the implementation block
@property (assign,nonatomic,__weak) QLItem * item;                                       //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(QLItemThumbnailGenerator *)thumbnailGenerator;
-(id)genericIconWithSize:(CGSize)arg1 ;
-(QLItem *)item;
-(void)encodeWithCoder:(id)arg1 ;
-(void)generateThumbnailWithSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_provideThumbnailForUbiquitousURLWithSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_handleThumbnailGenerationFinishedWithThumbnail:(id)arg1 size:(CGSize)arg2 clientCompletionBlock:(/*^block*/id)arg3 ;
-(void)setItem:(QLItem *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setThumbnailGenerator:(QLItemThumbnailGenerator *)arg1 ;
@end

