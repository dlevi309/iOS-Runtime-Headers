/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXZoomableInlineHeaderViewConfiguration : NSObject <NSCopying> {

	BOOL _swapTitleAndSubtitle;
	unsigned long long _style;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,readonly) unsigned long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL swapTitleAndSubtitle;              //@synthesize swapTitleAndSubtitle=_swapTitleAndSubtitle - In the implementation block
-(id)init;
-(NSString *)subtitle;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 swapTitleAndSubtitle:(BOOL)arg3 style:(unsigned long long)arg4 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(NSString *)title;
-(BOOL)swapTitleAndSubtitle;
-(BOOL)isEqual:(id)arg1 ;
@end

