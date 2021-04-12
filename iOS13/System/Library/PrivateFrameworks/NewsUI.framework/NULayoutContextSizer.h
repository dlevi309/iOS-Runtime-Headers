/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol NUSizer;
@class NSArray;

@interface NULayoutContextSizer : NSObject {

	id<NUSizer> _sizer;
	NSArray* _attributes;

}

@property (nonatomic,retain) id<NUSizer> sizer;                   //@synthesize sizer=_sizer - In the implementation block
@property (nonatomic,readonly) NSArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)description;
-(NSArray *)attributes;
-(BOOL)matchForLayoutContext:(id)arg1 ;
-(id<NUSizer>)sizer;
-(id)initWithSizer:(id)arg1 attributes:(id)arg2 ;
-(void)setSizer:(id<NUSizer>)arg1 ;
@end

