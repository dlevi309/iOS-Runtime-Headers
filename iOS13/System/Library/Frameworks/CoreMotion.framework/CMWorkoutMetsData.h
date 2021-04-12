/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber, NSUUID;

@interface CMWorkoutMetsData : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fStartDate;
	NSDate* fEndDate;
	NSNumber* fMets;
	NSUUID* fSourceId;
	NSUUID* fSessionId;

}

@property (nonatomic,readonly) NSNumber * mets; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSUUID *)sessionId;
-(NSUUID *)sourceId;
-(NSNumber *)mets;
-(id)initWithSessionId:(id)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 mets:(id)arg5 ;
-(id)initWithCLWorkoutMets:(const CLWorkoutMets*)arg1 ;
@end

