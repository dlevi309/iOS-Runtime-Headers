/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface PKSpendingSummaryFetcherRequest : NSObject <NSCopying> {

	BOOL _withLastChange;
	NSDate* _startDate;
	unsigned long long _type;

}

@property (nonatomic,retain) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL withLastChange;                  //@synthesize withLastChange=_withLastChange - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(BOOL)withLastChange;
-(void)setWithLastChange:(BOOL)arg1 ;
@end

