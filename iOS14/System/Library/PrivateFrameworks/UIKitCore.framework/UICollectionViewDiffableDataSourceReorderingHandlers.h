/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UICollectionViewDiffableDataSourceReorderingHandlers : NSObject <NSCopying> {

	/*^block*/id _canReorderItemHandler;
	/*^block*/id _willReorderHandler;
	/*^block*/id _didReorderHandler;

}

@property (nonatomic,copy) id canReorderItemHandler;              //@synthesize canReorderItemHandler=_canReorderItemHandler - In the implementation block
@property (nonatomic,copy) id willReorderHandler;                 //@synthesize willReorderHandler=_willReorderHandler - In the implementation block
@property (nonatomic,copy) id didReorderHandler;                  //@synthesize didReorderHandler=_didReorderHandler - In the implementation block
-(id)canReorderItemHandler;
-(void)setCanReorderItemHandler:(id)arg1 ;
-(void)setDidReorderHandler:(id)arg1 ;
-(void)setWillReorderHandler:(id)arg1 ;
-(id)initWithCanReorderItemHandler:(/*^block*/id)arg1 willReorderItemHandler:(/*^block*/id)arg2 didReorderItemHandler:(/*^block*/id)arg3 ;
-(id)didReorderHandler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)willReorderHandler;
@end

