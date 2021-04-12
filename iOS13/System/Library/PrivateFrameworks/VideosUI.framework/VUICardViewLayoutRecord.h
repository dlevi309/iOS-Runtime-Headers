/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUICardViewLayoutRecord : NSObject <NSCopying> {

	long long _layoutType;
	long long _gridStyle;
	long long _gridType;

}

@property (assign,nonatomic) long long layoutType;              //@synthesize layoutType=_layoutType - In the implementation block
@property (assign,nonatomic) long long gridStyle;               //@synthesize gridStyle=_gridStyle - In the implementation block
@property (assign,nonatomic) long long gridType;                //@synthesize gridType=_gridType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)layoutType;
-(void)setLayoutType:(long long)arg1 ;
-(long long)gridType;
-(long long)gridStyle;
-(void)setGridStyle:(long long)arg1 ;
-(void)setGridType:(long long)arg1 ;
@end

