/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@interface CLPropertyValue : NSObject {

	BOOL _dirty;
	id _value;

}

@property (nonatomic,retain,readonly) id value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL dirty;                     //@synthesize dirty=_dirty - In the implementation block
-(void)dealloc;
-(void)setDirty:(BOOL)arg1 ;
-(id)value;
-(BOOL)dirty;
-(id)initWithValue:(id)arg1 dirty:(BOOL)arg2 ;
@end

