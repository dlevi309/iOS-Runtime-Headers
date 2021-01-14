/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/NFLocking.h>

@protocol NFLocking;
@interface FCMTWriterLock : NSObject <NFLocking> {

	id<NFLocking> _underlyingLock;

}

@property (nonatomic,retain) id<NFLocking> underlyingLock;              //@synthesize underlyingLock=_underlyingLock - In the implementation block
-(void)unlock;
-(id)init;
-(void)setUnderlyingLock:(id<NFLocking>)arg1 ;
-(void)lock;
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(void)performReadSync:(/*^block*/id)arg1 ;
-(id)initWithUnderlyingLock:(id)arg1 ;
-(id<NFLocking>)underlyingLock;
@end

