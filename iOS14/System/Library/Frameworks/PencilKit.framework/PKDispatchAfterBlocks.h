/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol NSCopying;
@interface PKDispatchAfterBlocks : NSObject {

	id<NSCopying> _identifier;

}

@property (nonatomic,copy) id<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)dispatchAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)cancelAll;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
@end

