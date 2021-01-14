/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PKSelectionTileProperties : NSObject <NSCopying> {

	NSArray* _strokes;
	CGRect _frame;

}

@property (nonatomic,readonly) CGRect frame;                   //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) NSArray * strokes;              //@synthesize strokes=_strokes - In the implementation block
-(NSArray *)strokes;
-(CGRect)frame;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 strokes:(id)arg2 ;
@end

