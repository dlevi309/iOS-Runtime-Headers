/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRMangledID;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {

	BOOL _isSyncDown;
	int _lastErrorKind;
	double _delay;
	double _nextTry;
	BRMangledID* _mangledID;

}

@property (nonatomic,readonly) double delay;                       //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double nextTry;                     //@synthesize nextTry=_nextTry - In the implementation block
@property (nonatomic,readonly) int lastErrorKind;                  //@synthesize lastErrorKind=_lastErrorKind - In the implementation block
@property (nonatomic,retain) BRMangledID * mangledID;              //@synthesize mangledID=_mangledID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)clear;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)delay;
-(id)initWithCoder:(id)arg1 ;
-(double)nextTry;
-(BRMangledID *)mangledID;
-(id)initWithMangledID:(id)arg1 isSyncDown:(BOOL)arg2 ;
-(void)updateAfterSchedulingTask;
-(void)updateForError:(id)arg1 ;
-(void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1 ;
-(BOOL)updateForClearingOutOfQuota;
-(void)setMangledID:(BRMangledID *)arg1 ;
-(int)lastErrorKind;
@end

