/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)indexPath;
-(CGSize)size;
-(CGRect)frame;
-(void)setSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

