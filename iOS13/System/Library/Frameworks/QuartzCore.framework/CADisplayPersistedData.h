/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface CADisplayPersistedData : NSObject <NSSecureCoding> {

	NSString* _version;
	NSMutableArray* _latencies;
	NSMutableArray* _preferredModes;

}

@property (nonatomic,copy) NSString * version;                             //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * latencies;                   //@synthesize latencies=_latencies - In the implementation block
@property (nonatomic,retain) NSMutableArray * preferredModes;              //@synthesize preferredModes=_preferredModes - In the implementation block
+(id)sharedInstance;
+(BOOL)supportsSecureCoding;
+(id)supportedClasses;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(void)save;
-(void)update;
-(void)setLatency:(double)arg1 forUUID:(id)arg2 andMode:(Mode)arg3 ;
-(double)latencyForUUID:(id)arg1 andMode:(Mode)arg2 ;
-(void)setPreferredMode:(Mode)arg1 forUUID:(id)arg2 ;
-(Mode)preferredModeForUUID:(id)arg1 ;
-(NSMutableArray *)latencies;
-(void)setLatencies:(NSMutableArray *)arg1 ;
-(NSMutableArray *)preferredModes;
-(void)setPreferredModes:(NSMutableArray *)arg1 ;
@end

