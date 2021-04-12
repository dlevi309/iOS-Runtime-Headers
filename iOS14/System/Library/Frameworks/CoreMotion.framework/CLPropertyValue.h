/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@interface CLPropertyValue : NSObject {

	BOOL _dirty;
	id _value;

}

@property (nonatomic,retain,readonly) id value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL dirty;                     //@synthesize dirty=_dirty - In the implementation block
-(BOOL)dirty;
-(void)setDirty:(BOOL)arg1 ;
-(id)initWithValue:(id)arg1 dirty:(BOOL)arg2 ;
-(id)value;
-(void)dealloc;
@end

