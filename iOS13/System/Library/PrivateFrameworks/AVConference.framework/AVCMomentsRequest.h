/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSString;

@interface AVCMomentsRequest : NSObject {

	NSString* _transactionID;
	unsigned char _mediaType;
	id _delegate;
	unsigned char _mode;
	NSString* _requesterID;
	NSString* _requesteeID;

}

@property (assign,nonatomic) NSObject*<AVCMomentsRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned char mode;                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSString * transactionID;                                 //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,readonly) unsigned char mediaType;                                  //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSString * requesterID;                                   //@synthesize requesterID=_requesterID - In the implementation block
@property (nonatomic,readonly) NSString * requesteeID;                                   //@synthesize requesteeID=_requesteeID - In the implementation block
-(void)dealloc;
-(id)description;
-(NSObject*<AVCMomentsRequestDelegate>)delegate;
-(void)setDelegate:(NSObject*<AVCMomentsRequestDelegate>)arg1 ;
-(void)setMode:(unsigned char)arg1 ;
-(unsigned char)mode;
-(unsigned char)mediaType;
-(NSString *)transactionID;
-(BOOL)validateWithError:(id*)arg1 ;
-(NSString *)requesterID;
-(BOOL)startWithError:(id*)arg1 ;
-(id)initWithMediaType:(unsigned char)arg1 requesterID:(id)arg2 requesteeID:(id)arg3 transactionID:(id)arg4 ;
-(id)initWithMediaType:(unsigned char)arg1 requesterID:(id)arg2 requesteeID:(id)arg3 ;
-(NSString *)requesteeID;
-(BOOL)endWithError:(id*)arg1 ;
-(BOOL)rejectWithError:(id*)arg1 ;
@end

