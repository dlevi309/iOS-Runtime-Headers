/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/

#import <DataAccessExpress/DAOofParams.h>

@protocol DAOofResponseDelegate;
@class NSString;

@interface DAOofSettingsInfo : DAOofParams {

	NSString* _requestID;
	id<DAOofResponseDelegate> _consumer;

}

@property (nonatomic,retain) NSString * requestID;                                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic,__weak) id<DAOofResponseDelegate> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id<DAOofResponseDelegate>)consumer;
-(void)setConsumer:(id<DAOofResponseDelegate>)arg1 ;
@end

