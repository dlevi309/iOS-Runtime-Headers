/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@class NSString, DAMessageMoveRequest;

@interface DAMoveResponse : NSObject {

	int _status;
	NSString* _sourceID;
	NSString* _destID;
	DAMessageMoveRequest* _origRequest;

}

@property (assign,nonatomic) int status;                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * sourceID;                               //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * destID;                                 //@synthesize destID=_destID - In the implementation block
@property (nonatomic,retain) DAMessageMoveRequest * origRequest;              //@synthesize origRequest=_origRequest - In the implementation block
-(void)setSourceID:(NSString *)arg1 ;
-(NSString *)destID;
-(id)description;
-(void)setDestID:(NSString *)arg1 ;
-(DAMessageMoveRequest *)origRequest;
-(id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3 ;
-(void)setOrigRequest:(DAMessageMoveRequest *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(NSString *)sourceID;
-(int)status;
@end

