/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class NSMutableArray, NSString, NSDate, NSArray;

@interface VCPFaceTimeSession : NSObject {

	NSMutableArray* _faces;
	NSString* _sessionID;
	NSString* _callerID;
	NSDate* _date;

}

@property (nonatomic,retain) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * callerID;               //@synthesize callerID=_callerID - In the implementation block
@property (nonatomic,retain) NSDate * date;                     //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSArray * faces; 
+(id)session;
+(id)sessionFromManagedObject:(id)arg1 ;
+(id)createWithSessionID:(id)arg1 callerID:(id)arg2 andDate:(id)arg3 ;
-(NSArray *)faces;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)callerID;
-(void)setDate:(NSDate *)arg1 ;
-(void)addFace:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(void)setCallerID:(NSString *)arg1 ;
-(id)managedObjectForContext:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 callerID:(id)arg2 andDate:(id)arg3 ;
@end

