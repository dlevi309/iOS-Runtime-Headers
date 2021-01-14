/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest {

	/*^block*/id _shareAcceptedBlock;
	NSArray* _shareMetadatasToAccept;
	NSMutableDictionary* _shareMetadataByRequestID;

}

@property (nonatomic,retain) NSArray * shareMetadatasToAccept;                            //@synthesize shareMetadatasToAccept=_shareMetadatasToAccept - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareMetadataByRequestID;              //@synthesize shareMetadataByRequestID=_shareMetadataByRequestID - In the implementation block
@property (nonatomic,copy) id shareAcceptedBlock;                                         //@synthesize shareAcceptedBlock=_shareAcceptedBlock - In the implementation block
-(void)setShareMetadatasToAccept:(NSArray *)arg1 ;
-(NSArray *)shareMetadatasToAccept;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(NSMutableDictionary *)shareMetadataByRequestID;
-(id)shareAcceptedBlock;
-(id)initWithOperation:(id)arg1 shareMetadatasToAccept:(id)arg2 ;
-(void)setShareAcceptedBlock:(id)arg1 ;
-(void)setShareMetadataByRequestID:(NSMutableDictionary *)arg1 ;
@end

