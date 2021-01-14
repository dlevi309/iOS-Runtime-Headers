/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@class TRISQLiteCKDatabase, NSString, CKDatabase;

@interface TRISQLiteCKContainer : NSObject {

	TRISQLiteCKDatabase* _database;
	NSString* _containerIdentifier;

}

@property (nonatomic,readonly) CKDatabase * privateCloudDatabase; 
@property (nonatomic,readonly) CKDatabase * publicCloudDatabase; 
@property (nonatomic,readonly) CKDatabase * sharedCloudDatabase; 
@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(NSString *)containerIdentifier;
-(CKDatabase *)privateCloudDatabase;
-(CKDatabase *)publicCloudDatabase;
-(CKDatabase *)sharedCloudDatabase;
-(id)initWithContainerIdentifier:(id)arg1 database:(id)arg2 ;
@end

