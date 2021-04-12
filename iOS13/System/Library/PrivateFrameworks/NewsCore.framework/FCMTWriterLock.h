/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/NFLocking.h>

@protocol NFLocking;
@interface FCMTWriterLock : NSObject <NFLocking> {

	id<NFLocking> _underlyingLock;

}

@property (nonatomic,retain) id<NFLocking> underlyingLock;              //@synthesize underlyingLock=_underlyingLock - In the implementation block
-(id)init;
-(void)lock;
-(void)unlock;
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(void)performReadSync:(/*^block*/id)arg1 ;
-(id<NFLocking>)underlyingLock;
-(void)setUnderlyingLock:(id<NFLocking>)arg1 ;
-(id)initWithUnderlyingLock:(id)arg1 ;
@end

