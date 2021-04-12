/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CDPSimpleModelParameterManagerTuningValue, NSMutableArray, _CDPModelTuningState;

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding> {

	_CDPSimpleModelParameterManagerTuningValue* _previousBestTuningValue;
	NSMutableArray* _tuningValues;
	_CDPModelTuningState* _lastTuningState;

}

@property (nonatomic,retain) _CDPSimpleModelParameterManagerTuningValue * previousBestTuningValue;              //@synthesize previousBestTuningValue=_previousBestTuningValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * tuningValues;                                                     //@synthesize tuningValues=_tuningValues - In the implementation block
@property (nonatomic,retain) _CDPModelTuningState * lastTuningState;                                            //@synthesize lastTuningState=_lastTuningState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_CDPSimpleModelParameterManagerTuningValue *)previousBestTuningValue;
-(void)setPreviousBestTuningValue:(_CDPSimpleModelParameterManagerTuningValue *)arg1 ;
-(NSMutableArray *)tuningValues;
-(void)setTuningValues:(NSMutableArray *)arg1 ;
-(_CDPModelTuningState *)lastTuningState;
-(void)setLastTuningState:(_CDPModelTuningState *)arg1 ;
@end

