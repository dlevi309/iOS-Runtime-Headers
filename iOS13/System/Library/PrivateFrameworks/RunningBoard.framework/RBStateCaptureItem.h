/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol BSInvalidatable;
@class NSString;

@interface RBStateCaptureItem : NSObject {

	id<BSInvalidatable> _invalidatable;
	/*^block*/id _block;
	NSString* _title;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(id)block;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 ;
@end

