/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)sessionId;
-(NSDate *)endDate;
-(NSNumber *)mets;
-(NSUUID *)sourceId;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithSessionId:(id)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 mets:(id)arg5 ;
-(id)initWithCLWorkoutMets:(const CLWorkoutMets*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

