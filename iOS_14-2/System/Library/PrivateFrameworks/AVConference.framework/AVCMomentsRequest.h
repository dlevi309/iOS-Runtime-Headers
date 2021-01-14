/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol AVCMomentsRequestDelegate;
@class NSString, NSObject;

@interface AVCMomentsRequest : NSObject {

	unsigned char _mediaType;
	unsigned char _mode;
	NSString* _transactionID;
	NSObject*<AVCMomentsRequestDelegate> _delegate;
	NSString* _requesterID;
	NSString* _requesteeID;

}

@property (assign,nonatomic) NSObject*<AVCMomentsRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned char mode;                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSString * transactionID;                                 //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,readonly) unsigned char mediaType;                                  //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSString * requesterID;                                   //@synthesize requesterID=_requesterID - In the implementation block
@property (nonatomic,readonly) NSString * requesteeID;                                   //@synthesize requesteeID=_requesteeID - In the implementation block
-(BOOL)validateWithError:(id*)arg1 ;
-(unsigned char)mode;
-(unsigned char)mediaType;
-(BOOL)rejectWithError:(id*)arg1 ;
-(NSObject*<AVCMomentsRequestDelegate>)delegate;
-(void)setMode:(unsigned char)arg1 ;
-(void)setDelegate:(NSObject*<AVCMomentsRequestDelegate>)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(id)description;
-(NSString *)requesterID;
-(NSString *)transactionID;
-(void)dealloc;
-(BOOL)endWithError:(id*)arg1 ;
-(id)initWithMediaType:(unsigned char)arg1 requesterID:(id)arg2 requesteeID:(id)arg3 transactionID:(id)arg4 ;
-(id)initWithMediaType:(unsigned char)arg1 requesterID:(id)arg2 requesteeID:(id)arg3 ;
-(NSString *)requesteeID;
@end

