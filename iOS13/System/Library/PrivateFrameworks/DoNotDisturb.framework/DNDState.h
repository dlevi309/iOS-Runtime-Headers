/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DNDState : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _suppressionState;
	NSArray* _activeModeAssertionMetadata;

}

@property (nonatomic,readonly) BOOL willSuppressInterruptions; 
@property (nonatomic,copy,readonly) NSArray * activeModeIdentifiers; 
@property (nonatomic,readonly) unsigned long long suppressionState;                     //@synthesize suppressionState=_suppressionState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeModeAssertionMetadata;              //@synthesize activeModeAssertionMetadata=_activeModeAssertionMetadata - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(unsigned long long)suppressionState;
-(NSArray *)activeModeAssertionMetadata;
-(id)initWithSuppressionState:(unsigned long long)arg1 activeModeAssertionMetadata:(id)arg2 ;
-(BOOL)willSuppressInterruptions;
-(NSArray *)activeModeIdentifiers;
@end

