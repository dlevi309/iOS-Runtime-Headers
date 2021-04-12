/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface ATXMinimalSlotResolutionParameters : NSObject <NSCopying> {

	unsigned long long _paramHash;
	NSUUID* _slotSetUuid;
	unsigned long long _slotHash;
	unsigned long long _paramCount;

}

@property (nonatomic,readonly) unsigned long long slotHash;                //@synthesize slotHash=_slotHash - In the implementation block
@property (nonatomic,readonly) unsigned long long paramCount;              //@synthesize paramCount=_paramCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithParameterHash:(unsigned long long)arg1 slotHash:(unsigned long long)arg2 uuid:(id)arg3 paramCount:(unsigned long long)arg4 ;
-(id)initWithAction:(id)arg1 slots:(id)arg2 ;
-(id)actionAndSlotSet;
-(unsigned long long)slotHash;
-(unsigned long long)paramCount;
@end

