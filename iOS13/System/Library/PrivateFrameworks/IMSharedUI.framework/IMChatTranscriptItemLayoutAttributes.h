/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath;

@interface IMChatTranscriptItemLayoutAttributes : NSObject <NSCopying> {

	NSIndexPath* _indexPath;
	CGSize _size;
	CGRect _frame;

}

@property (nonatomic,copy) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) CGRect frame;                       //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(NSIndexPath *)indexPath;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
@end

