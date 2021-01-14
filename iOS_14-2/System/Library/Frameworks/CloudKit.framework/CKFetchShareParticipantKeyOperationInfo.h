/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface CKFetchShareParticipantKeyOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSDictionary* _baseTokensByShareID;
	NSDictionary* _childRecordIDsByShareID;
	NSArray* _shareIDs;

}

@property (nonatomic,retain) NSDictionary * baseTokensByShareID;                  //@synthesize baseTokensByShareID=_baseTokensByShareID - In the implementation block
@property (nonatomic,retain) NSDictionary * childRecordIDsByShareID;              //@synthesize childRecordIDsByShareID=_childRecordIDsByShareID - In the implementation block
@property (nonatomic,retain) NSArray * shareIDs;                                  //@synthesize shareIDs=_shareIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)shareIDs;
-(void)setShareIDs:(NSArray *)arg1 ;
-(NSDictionary *)baseTokensByShareID;
-(void)setBaseTokensByShareID:(NSDictionary *)arg1 ;
-(NSDictionary *)childRecordIDsByShareID;
-(void)setChildRecordIDsByShareID:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

