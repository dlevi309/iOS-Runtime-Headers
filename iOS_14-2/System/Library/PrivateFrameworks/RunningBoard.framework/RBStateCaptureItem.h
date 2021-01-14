/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBSInvalidatable;
@class NSString;

@interface RBStateCaptureItem : NSObject {

	id<RBSInvalidatable> _invalidatable;
	/*^block*/id _block;
	NSString* _title;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)block;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)dealloc;
@end

