/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSNumber, NSString, NSSet;

@interface BRCProblemReport : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _problems;
	BOOL _needsSyncUp;
	int _state;
	NSNumber* _pendingRequestID;

}

@property (nonatomic,readonly) int state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * effectiveProblemMessage; 
@property (nonatomic,readonly) NSSet * effectedRecordNames; 
@property (nonatomic,retain) NSNumber * pendingRequestID;                       //@synthesize pendingRequestID=_pendingRequestID - In the implementation block
@property (assign,nonatomic) BOOL needsSyncUp;                                  //@synthesize needsSyncUp=_needsSyncUp - In the implementation block
@property (nonatomic,readonly) BOOL shouldResetAfterFixingState; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)needsSyncUp;
-(void)addProblemWithType:(int)arg1 recordName:(id)arg2 ;
-(void)setPendingRequestID:(NSNumber *)arg1 ;
-(void)setNeedsSyncUp:(BOOL)arg1 ;
-(NSNumber *)pendingRequestID;
-(BOOL)shouldResetAfterFixingState;
-(NSSet *)effectedRecordNames;
-(id)initWithProblemReport:(id)arg1 ;
-(int)_priorityForProblemType:(int)arg1 ;
-(int)_effectiveProblemType;
-(int)_zoneStateForProblemType:(int)arg1 ;
-(void)_addProblem:(id)arg1 ;
-(NSString *)effectiveProblemMessage;
@end

