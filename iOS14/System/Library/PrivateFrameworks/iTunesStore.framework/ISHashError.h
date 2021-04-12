/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)rangeEnd;
-(long long)rangeStart;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setActualHashString:(NSString *)arg1 ;
-(void)setExpectedHashString:(NSString *)arg1 ;
-(void)setRangeEnd:(long long)arg1 ;
-(void)setRangeStart:(long long)arg1 ;
-(NSString *)hashFailureHeaderString;
-(NSString *)actualHashString;
-(NSString *)expectedHashString;
@end

