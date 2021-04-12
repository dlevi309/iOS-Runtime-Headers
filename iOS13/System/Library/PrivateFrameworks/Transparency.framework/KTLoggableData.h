/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface KTLoggableData : NSObject <NSSecureCoding> {

	BOOL _successfulSync;
	BOOL _marked;
	NSData* _deviceID;
	NSData* _clientData;
	NSData* _deviceVRFOutput;
	NSData* _clientDataVRFOutput;

}

@property (retain) NSData * deviceVRFOutput;                  //@synthesize deviceVRFOutput=_deviceVRFOutput - In the implementation block
@property (retain) NSData * clientDataVRFOutput;              //@synthesize clientDataVRFOutput=_clientDataVRFOutput - In the implementation block
@property (retain) NSData * clientData;                       //@synthesize clientData=_clientData - In the implementation block
@property (copy) NSData * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (assign) BOOL successfulSync;                       //@synthesize successfulSync=_successfulSync - In the implementation block
@property (assign) BOOL marked;                               //@synthesize marked=_marked - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)deviceID;
-(void)setDeviceID:(NSData *)arg1 ;
-(NSData *)clientData;
-(void)setClientData:(NSData *)arg1 ;
-(NSData *)clientDataVRFOutput;
-(void)setClientDataVRFOutput:(NSData *)arg1 ;
-(BOOL)successfulSync;
-(BOOL)marked;
-(id)initWithClientData:(id)arg1 ;
-(void)setSuccessfulSync:(BOOL)arg1 ;
-(void)setMarked:(BOOL)arg1 ;
-(NSData *)deviceVRFOutput;
-(void)setDeviceVRFOutput:(NSData *)arg1 ;
@end

