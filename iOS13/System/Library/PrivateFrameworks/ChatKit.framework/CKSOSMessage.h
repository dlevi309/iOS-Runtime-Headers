/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSString, NSArray;

@interface CKSOSMessage : NSObject <NSCopying> {

	BOOL _useStandalone;
	BOOL _isMMSEnabled;
	CLLocation* _location;
	NSString* _locationURL;
	NSArray* _recipients;
	/*^block*/id _failureBlock;
	NSArray* _handles;
	NSString* _message;
	NSString* _smsMessage;
	NSString* _mmsMessage;

}

@property (getter=handles,nonatomic,copy) NSArray * handles;              //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * smsMessage;                         //@synthesize smsMessage=_smsMessage - In the implementation block
@property (nonatomic,copy) NSString * mmsMessage;                         //@synthesize mmsMessage=_mmsMessage - In the implementation block
@property (assign,nonatomic) BOOL isMMSEnabled;                           //@synthesize isMMSEnabled=_isMMSEnabled - In the implementation block
@property (nonatomic,copy) CLLocation * location;                         //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * locationURL;                        //@synthesize locationURL=_locationURL - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) id failureBlock;                               //@synthesize failureBlock=_failureBlock - In the implementation block
@property (assign,nonatomic) BOOL useStandalone;                          //@synthesize useStandalone=_useStandalone - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)handles;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)isMMSEnabled;
-(void)setHandles:(NSArray *)arg1 ;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
-(void)setSmsMessage:(NSString *)arg1 ;
-(void)setMmsMessage:(NSString *)arg1 ;
-(void)setLocationURL:(NSString *)arg1 ;
-(void)setUseStandalone:(BOOL)arg1 ;
-(void)setIsMMSEnabled:(BOOL)arg1 ;
-(id)initWithMessage:(id)arg1 recipients:(id)arg2 ;
-(id)initWithSMSMessage:(id)arg1 mmsMessage:(id)arg2 recipients:(id)arg3 ;
-(NSString *)locationURL;
-(BOOL)useStandalone;
-(NSString *)smsMessage;
-(NSString *)mmsMessage;
@end

