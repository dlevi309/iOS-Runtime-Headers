/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setServerURL:(NSURL *)arg1 ;
-(BOOL)isSuccess;
-(NSURL *)serverURL;
-(NSMutableDictionary *)allFields;
-(void)incrementErrorCount;
-(id)initWithEventDictionary:(id)arg1 extendingWith:(id)arg2 reportingToServer:(id)arg3 ;
-(id)getAugmentedEvent;
-(BOOL)changedSinceReported;
-(BOOL)isEqualErrorEvent:(id)arg1 ;
-(NSString *)reportedUUID;
-(void)setChangedSinceReported:(BOOL)arg1 ;
-(void)setAllFields:(NSMutableDictionary *)arg1 ;
-(void)setReportedUUID:(NSString *)arg1 ;
@end

