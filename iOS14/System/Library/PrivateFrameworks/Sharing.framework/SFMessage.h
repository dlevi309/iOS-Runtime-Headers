/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SFDevice, NSData, NSDictionary, SFSession, NSSet;

@interface SFMessage : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	SFDevice* _peerDevice;
	BOOL _expectsResponse;
	NSData* _bodyData;
	/*^block*/id _completionHandler;
	NSDictionary* _headerFields;
	SFSession* _session;
	NSSet* _deviceIDs;

}

@property (nonatomic,copy) NSSet * deviceIDs;                        //@synthesize deviceIDs=_deviceIDs - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SFSession * session;                    //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSData * bodyData;                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                   //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                  //@synthesize peerDevice=_peerDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(SFDevice *)peerDevice;
-(void)encodeWithCoder:(id)arg1 ;
-(SFSession *)session;
-(id)completionHandler;
-(NSDictionary *)headerFields;
-(void)setBodyData:(NSData *)arg1 ;
-(id)description;
-(void)setSession:(SFSession *)arg1 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(NSData *)bodyData;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)setDeviceIDs:(NSSet *)arg1 ;
-(NSSet *)deviceIDs;
@end

