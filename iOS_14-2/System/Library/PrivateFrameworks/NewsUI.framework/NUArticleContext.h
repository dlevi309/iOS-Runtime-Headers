/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NUArticleContext : NSObject <NSCopying> {

	BOOL _shouldAutoPlayVideo;
	NSString* _componentIdentifier;

}

@property (nonatomic,readonly) BOOL shouldAutoPlayVideo;                    //@synthesize shouldAutoPlayVideo=_shouldAutoPlayVideo - In the implementation block
@property (nonatomic,readonly) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
-(BOOL)shouldAutoPlayVideo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)componentIdentifier;
-(id)initWithShouldAutoPlayVideo:(BOOL)arg1 componentIdentifier:(id)arg2 ;
@end

