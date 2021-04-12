/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TRIExperimentDatabase, NSString;

@interface TRINamespaceRecord : NSObject <NSSecureCoding> {

	TRIExperimentDatabase* _database;
	NSString* _experimentId;
	unsigned _namespaceId;
	unsigned _namespaceCompatibilityVersion;
	NSString* _treatmentId;
	NSString* _treatmentPath;

}

@property (assign) unsigned namespaceId;                                //@synthesize namespaceId=_namespaceId - In the implementation block
@property (retain) NSString * experimentId;                             //@synthesize experimentId=_experimentId - In the implementation block
@property (retain) NSString * treatmentId;                              //@synthesize treatmentId=_treatmentId - In the implementation block
@property (retain) NSString * treatmentPath;                            //@synthesize treatmentPath=_treatmentPath - In the implementation block
@property (assign) unsigned namespaceCompatibilityVersion;              //@synthesize namespaceCompatibilityVersion=_namespaceCompatibilityVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(unsigned)namespaceId;
-(unsigned)namespaceCompatibilityVersion;
-(void)setNamespaceId:(unsigned)arg1 ;
-(NSString *)treatmentPath;
-(void)setNamespaceCompatibilityVersion:(unsigned)arg1 ;
-(void)setTreatmentPath:(NSString *)arg1 ;
@end

