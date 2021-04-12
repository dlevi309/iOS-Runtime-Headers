/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSWPAttachment, TSDLayout;

@interface TSWPTypesetterAttachmentMap : NSObject {

	TSWPAttachment* _attachment;
	TSDLayout* _layout;
	CTLineRef _lineRef;

}

@property (assign,nonatomic) TSWPAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) TSDLayout * layout;                       //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) CTLineRef lineRef;                      //@synthesize lineRef=_lineRef - In the implementation block
+(id)mapWithAttachment:(id)arg1 layout:(id)arg2 pageNumber:(unsigned long long)arg3 pageCount:(unsigned long long)arg4 footnoteMarkProvider:(id)arg5 styleProvider:(id)arg6 colorOverride:(id)arg7 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSDLayout *)layout;
-(void)setLayout:(TSDLayout *)arg1 ;
-(TSWPAttachment *)attachment;
-(void)setAttachment:(TSWPAttachment *)arg1 ;
-(CTLineRef)lineRef;
@end

