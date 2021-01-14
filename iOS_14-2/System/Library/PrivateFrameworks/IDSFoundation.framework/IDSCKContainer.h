/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)__class;
+(id)containerWithIdentifier:(id)arg1 ;
-(NSString *)containerIdentifier;
-(IDSCKDatabase *)privateCloudDatabase;
-(IDSCKDatabase *)publicCloudDatabase;
@end

