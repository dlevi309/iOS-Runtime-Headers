/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)tuningValues;
-(void)setTuningValues:(NSMutableArray *)arg1 ;
-(_CDPSimpleModelParameterManagerTuningValue *)previousBestTuningValue;
-(_CDPModelTuningState *)lastTuningState;
-(void)setPreviousBestTuningValue:(_CDPSimpleModelParameterManagerTuningValue *)arg1 ;
-(void)setLastTuningState:(_CDPModelTuningState *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

