/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchRootRecord;
	NSArray* _shareURLsToFetch;
	NSArray* _rootRecordDesiredKeys;
	NSDictionary* _shareInvitationTokensByShareURL;

}

@property (nonatomic,retain) NSArray * shareURLsToFetch;                                  //@synthesize shareURLsToFetch=_shareURLsToFetch - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                                  //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,retain) NSArray * rootRecordDesiredKeys;                             //@synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * shareInvitationTokensByShareURL;              //@synthesize shareInvitationTokensByShareURL=_shareInvitationTokensByShareURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShareURLsToFetch:(NSArray *)arg1 ;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(NSArray *)rootRecordDesiredKeys;
-(void)setRootRecordDesiredKeys:(NSArray *)arg1 ;
-(NSDictionary *)shareInvitationTokensByShareURL;
-(void)setShareInvitationTokensByShareURL:(NSDictionary *)arg1 ;
-(NSArray *)shareURLsToFetch;
@end

