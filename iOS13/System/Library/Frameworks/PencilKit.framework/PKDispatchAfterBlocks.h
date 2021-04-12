/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol NSCopying;
@interface PKDispatchAfterBlocks : NSObject {

	id<NSCopying> _identifier;

}

@property (nonatomic,copy) id<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(id<NSCopying>)identifier;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)cancelAll;
-(void)dispatchAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
@end

