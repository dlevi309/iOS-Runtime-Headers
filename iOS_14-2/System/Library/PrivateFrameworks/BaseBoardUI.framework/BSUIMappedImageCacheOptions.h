/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol BSPathProviding;
@interface BSUIMappedImageCacheOptions : NSObject <NSCopying> {

	id<BSPathProviding> _containerPathProvider;

}

@property (nonatomic,readonly) id<BSPathProviding> containerPathProvider; 
+(id)optionsWithContainerPathProvider:(id)arg1 ;
-(id<BSPathProviding>)containerPathProvider;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

