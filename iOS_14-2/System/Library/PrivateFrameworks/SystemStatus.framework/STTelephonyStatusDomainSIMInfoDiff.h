/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDiff.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BSSettings, NSString;

@interface STTelephonyStatusDomainSIMInfoDiff : NSObject <STStatusDomainDataDiff, NSCopying> {

	BSSettings* _changes;

}

@property (nonatomic,copy,readonly) BSSettings * changes;              //@synthesize changes=_changes - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)diffFromInfo:(id)arg1 toInfo:(id)arg2 ;
-(BSSettings *)changes;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithChanges:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)applyToMutableInfo:(id)arg1 ;
-(id)infoByApplyingToInfo:(id)arg1 ;
@end

