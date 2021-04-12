/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString, IDSCKDatabase;

@interface IDSCKContainer : NSObject {

	NSString* _containerIdentifier;
	IDSCKDatabase* _privateCloudDatabase;
	IDSCKDatabase* _publicCloudDatabase;

}

@property (readonly) NSString * containerIdentifier;                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) IDSCKDatabase * privateCloudDatabase;              //@synthesize privateCloudDatabase=_privateCloudDatabase - In the implementation block
@property (nonatomic,readonly) IDSCKDatabase * publicCloudDatabase;               //@synthesize publicCloudDatabase=_publicCloudDatabase - In the implementation block
+(id)containerWithIdentifier:(id)arg1 ;
+(Class)__class;
-(NSString *)containerIdentifier;
-(IDSCKDatabase *)privateCloudDatabase;
-(IDSCKDatabase *)publicCloudDatabase;
@end

