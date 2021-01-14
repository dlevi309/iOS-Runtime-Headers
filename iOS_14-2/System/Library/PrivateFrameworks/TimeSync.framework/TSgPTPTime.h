/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSgPTPTime : NSObject <NSCopying> {

	BOOL _ptpTimescale;
	BOOL _timeTraceable;
	BOOL _frequencyTraceable;
	unsigned short _localPortNumber;
	unsigned long long _nanosecondsSinceEpoch;
	unsigned long long _grandmasterIdentity;

}

@property (nonatomic,readonly) unsigned long long nanosecondsSinceEpoch;                         //@synthesize nanosecondsSinceEpoch=_nanosecondsSinceEpoch - In the implementation block
@property (nonatomic,readonly) unsigned long long seconds; 
@property (nonatomic,readonly) unsigned nanoseconds; 
@property (nonatomic,readonly) unsigned long long grandmasterIdentity;                           //@synthesize grandmasterIdentity=_grandmasterIdentity - In the implementation block
@property (nonatomic,readonly) unsigned short localPortNumber;                                   //@synthesize localPortNumber=_localPortNumber - In the implementation block
@property (getter=isPTPTimescale,nonatomic,readonly) BOOL ptpTimescale;                          //@synthesize ptpTimescale=_ptpTimescale - In the implementation block
@property (getter=isTimeTraceable,nonatomic,readonly) BOOL timeTraceable;                        //@synthesize timeTraceable=_timeTraceable - In the implementation block
@property (getter=isFrequencyTraceable,nonatomic,readonly) BOOL frequencyTraceable;              //@synthesize frequencyTraceable=_frequencyTraceable - In the implementation block
-(unsigned long long)seconds;
-(id)init;
-(unsigned)nanoseconds;
-(unsigned long long)grandmasterIdentity;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSeconds:(unsigned long long)arg1 nanoseconds:(unsigned)arg2 onGrandmaster:(unsigned long long)arg3 withLocalPortNumber:(unsigned short)arg4 ptpTimescale:(BOOL)arg5 timeTraceable:(BOOL)arg6 frequencyTraceable:(BOOL)arg7 ;
-(unsigned long long)nanosecondsSinceEpoch;
-(BOOL)isTimeTraceable;
-(BOOL)isPTPTimescale;
-(BOOL)isFrequencyTraceable;
-(unsigned short)localPortNumber;
-(id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1 onGrandmaster:(unsigned long long)arg2 withLocalPortNumber:(unsigned short)arg3 ptpTimescale:(BOOL)arg4 timeTraceable:(BOOL)arg5 frequencyTraceable:(BOOL)arg6 ;
@end

