/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)layoutType;
-(void)setLayoutType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)gridType;
-(BOOL)isEqual:(id)arg1 ;
-(long long)gridStyle;
-(void)setGridStyle:(long long)arg1 ;
-(void)setGridType:(long long)arg1 ;
@end

