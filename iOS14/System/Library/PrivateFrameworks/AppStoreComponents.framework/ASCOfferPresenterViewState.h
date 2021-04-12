/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCOfferMetadata, ASCOfferTheme;

@interface ASCOfferPresenterViewState : NSObject <NSCopying> {

	ASCOfferMetadata* _metadata;
	ASCOfferTheme* _theme;

}

@property (nonatomic,copy,readonly) ASCOfferMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) ASCOfferTheme * theme;                    //@synthesize theme=_theme - In the implementation block
-(ASCOfferTheme *)theme;
-(id)description;
-(unsigned long long)hash;
-(ASCOfferMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMetadata:(id)arg1 theme:(id)arg2 ;
@end

