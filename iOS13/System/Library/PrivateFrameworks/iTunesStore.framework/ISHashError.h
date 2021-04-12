/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ISHashError : NSObject <NSCopying> {

	NSString* _actualHashString;
	NSString* _expectedHashString;
	long long _rangeEnd;
	long long _rangeStart;

}

@property (nonatomic,copy) NSString * actualHashString;                         //@synthesize actualHashString=_actualHashString - In the implementation block
@property (nonatomic,copy) NSString * expectedHashString;                       //@synthesize expectedHashString=_expectedHashString - In the implementation block
@property (assign,nonatomic) long long rangeEnd;                                //@synthesize rangeEnd=_rangeEnd - In the implementation block
@property (assign,nonatomic) long long rangeStart;                              //@synthesize rangeStart=_rangeStart - In the implementation block
@property (nonatomic,readonly) NSString * hashFailureHeaderString; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)rangeStart;
-(long long)rangeEnd;
-(void)setActualHashString:(NSString *)arg1 ;
-(void)setExpectedHashString:(NSString *)arg1 ;
-(void)setRangeEnd:(long long)arg1 ;
-(void)setRangeStart:(long long)arg1 ;
-(NSString *)hashFailureHeaderString;
-(NSString *)actualHashString;
-(NSString *)expectedHashString;
@end

