/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSUUID;

@interface ATXSlotSet : NSObject <NSCopying, NSSecureCoding> {

	unsigned _hash;
	NSSet* _parameters;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSSet * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(NSSet *)parameters;
-(id)initWithParameters:(id)arg1 uuid:(id)arg2 ;
-(id)initWithOpaqueParameters;
-(id)initWithOpaqueParametersUuid:(id)arg1 ;
-(BOOL)isEqualToSlotSet:(id)arg1 ;
@end

