/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@class NSMutableDictionary, NSURL, NSString;

@interface SUCoreEvent : NSObject {

	BOOL _changedSinceReported;
	NSMutableDictionary* _allFields;
	NSURL* _serverURL;
	NSString* _reportedUUID;

}

@property (nonatomic,retain) NSMutableDictionary * allFields;              //@synthesize allFields=_allFields - In the implementation block
@property (assign,nonatomic) BOOL changedSinceReported;                    //@synthesize changedSinceReported=_changedSinceReported - In the implementation block
@property (nonatomic,retain) NSURL * serverURL;                            //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,retain) NSString * reportedUUID;                      //@synthesize reportedUUID=_reportedUUID - In the implementation block
-(BOOL)isSuccess;
-(NSURL *)serverURL;
-(void)setServerURL:(NSURL *)arg1 ;
-(NSMutableDictionary *)allFields;
-(id)initWithEventDictionary:(id)arg1 extendingWith:(id)arg2 reportingToServer:(id)arg3 ;
-(id)getAugmentedEvent;
-(BOOL)changedSinceReported;
-(BOOL)isEqualErrorEvent:(id)arg1 ;
-(void)incrementErrorCount;
-(NSString *)reportedUUID;
-(void)setChangedSinceReported:(BOOL)arg1 ;
-(void)setAllFields:(NSMutableDictionary *)arg1 ;
-(void)setReportedUUID:(NSString *)arg1 ;
@end

