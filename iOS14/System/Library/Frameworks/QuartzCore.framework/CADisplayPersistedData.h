/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
+(id)supportedClasses;
-(id)init;
-(void)save;
-(void)encodeWithCoder:(id)arg1 ;
-(void)update;
-(id)description;
-(NSMutableArray *)latencies;
-(id)initWithCoder:(id)arg1 ;
-(void)setLatencies:(NSMutableArray *)arg1 ;
-(void)setLatency:(double)arg1 forUUID:(id)arg2 andMode:(Mode)arg3 ;
-(double)latencyForUUID:(id)arg1 andMode:(Mode)arg2 ;
-(void)setPreferredMode:(Mode)arg1 forUUID:(id)arg2 ;
-(Mode)preferredModeForUUID:(id)arg1 ;
-(NSMutableArray *)preferredModes;
-(void)setPreferredModes:(NSMutableArray *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)dealloc;
@end

