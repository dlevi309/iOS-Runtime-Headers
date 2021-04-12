/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TRIExperimentDatabase, NSDictionary, NSString, NSArray;

@interface TRIExperimentRecord : NSObject <NSSecureCoding> {

	TRIExperimentDatabase* _database;
	NSDictionary* _namespaces;
	int _type;
	NSString* _experimentId;
	NSString* _treatmentId;
	long long _status;
	double _startTimestamp;
	double _endTimestamp;
	NSString* _namespaceDescriptorDirectory;

}

@property (retain) NSString * experimentId;                              //@synthesize experimentId=_experimentId - In the implementation block
@property (retain) NSString * treatmentId;                               //@synthesize treatmentId=_treatmentId - In the implementation block
@property (assign) int type;                                             //@synthesize type=_type - In the implementation block
@property (assign) long long status;                                     //@synthesize status=_status - In the implementation block
@property (assign) double startTimestamp;                                //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign) double endTimestamp;                                  //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (retain) NSString * namespaceDescriptorDirectory;              //@synthesize namespaceDescriptorDirectory=_namespaceDescriptorDirectory - In the implementation block
@property (readonly) NSArray * namespaces; 
+(BOOL)supportsSecureCoding;
-(BOOL)clearCache;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(BOOL)remove;
-(void)setStatus:(long long)arg1 ;
-(id)startTime;
-(id)endTime;
-(void)setEndTime:(id)arg1 ;
-(void)setStartTime:(id)arg1 ;
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
-(id)initWithDatabase:(id)arg1 ;
-(double)endTimestamp;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setEndTimestamp:(double)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(NSArray *)namespaces;
-(BOOL)isExpiredExperiment;
-(BOOL)updateTreatmentId:(id)arg1 ;
-(NSString *)namespaceDescriptorDirectory;
-(void)_loadNamespaces;
-(void)setNamespaceDescriptorDirectory:(NSString *)arg1 ;
-(id)namespaceWithId:(unsigned)arg1 ;
@end

