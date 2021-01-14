/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWithLastChange:(BOOL)arg1 ;
-(BOOL)withLastChange;
-(BOOL)isEqual:(id)arg1 ;
@end

