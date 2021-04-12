/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTDiscardableContent.h>

@class NSString, MSSticker;

@interface AVTUIStickerItem : NSObject <AVTDiscardableContent> {

	BOOL _hasBeenRendered;
	/*^block*/id discardableContentHandler;
	NSString* _localizedName;
	MSSticker* _cachedMSSticker;
	/*^block*/id _resourceProvider;
	CGRect _clippingRect;

}

@property (nonatomic,copy,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) MSSticker * cachedMSSticker;                  //@synthesize cachedMSSticker=_cachedMSSticker - In the implementation block
@property (assign,nonatomic) BOOL hasBeenRendered;                         //@synthesize hasBeenRendered=_hasBeenRendered - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                          //@synthesize clippingRect=_clippingRect - In the implementation block
@property (nonatomic,copy,readonly) id resourceProvider;                   //@synthesize resourceProvider=_resourceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id discardableContentHandler; 
-(NSString *)description;
-(NSString *)localizedName;
-(void)clearCachedItems;
-(id)resourceProvider;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)setCachedMSSticker:(MSSticker *)arg1 ;
-(BOOL)hasBeenRendered;
-(MSSticker *)cachedMSSticker;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(id)initWithLocalizedName:(id)arg1 resourceProvider:(/*^block*/id)arg2 ;
-(void)setHasBeenRendered:(BOOL)arg1 ;
@end

