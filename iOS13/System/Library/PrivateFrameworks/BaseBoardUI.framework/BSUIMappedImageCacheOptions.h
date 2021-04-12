/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol BSPathProviding;
@interface BSUIMappedImageCacheOptions : NSObject <NSCopying> {

	id<BSPathProviding> _containerPathProvider;

}

@property (nonatomic,retain) id<BSPathProviding> containerPathProvider;              //@synthesize containerPathProvider=_containerPathProvider - In the implementation block
+(id)optionsWithContainerPathProvider:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerPathProvider:(id<BSPathProviding>)arg1 ;
-(id<BSPathProviding>)containerPathProvider;
@end

