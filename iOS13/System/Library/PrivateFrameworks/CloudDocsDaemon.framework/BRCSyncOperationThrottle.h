/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)clear;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)delay;
-(BRMangledID *)mangledID;
-(id)initWithMangledID:(id)arg1 isSyncDown:(BOOL)arg2 ;
-(double)nextTry;
-(void)updateAfterSchedulingTask;
-(void)updateForError:(id)arg1 ;
-(void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1 ;
-(BOOL)updateForClearingOutOfQuota;
-(void)setMangledID:(BRMangledID *)arg1 ;
-(int)lastErrorKind;
@end

