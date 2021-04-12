/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface KTLoggableData : NSObject <NSSecureCoding> {

	BOOL _successfulSync;
	BOOL _marked;
	BOOL _notInSyncedData;
	NSData* _deviceID;
	NSData* _clientData;
	NSData* _deviceVRFOutput;
	NSData* _clientDataVRFOutput;

}

@property (retain) NSData * deviceVRFOutput;                  //@synthesize deviceVRFOutput=_deviceVRFOutput - In the implementation block
@property (retain) NSData * clientDataVRFOutput;              //@synthesize clientDataVRFOutput=_clientDataVRFOutput - In the implementation block
@property (retain) NSData * clientData;                       //@synthesize clientData=_clientData - In the implementation block
@property (assign) BOOL notInSyncedData;                      //@synthesize notInSyncedData=_notInSyncedData - In the implementation block
@property (copy) NSData * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (assign) BOOL successfulSync;                       //@synthesize successfulSync=_successfulSync - In the implementation block
@property (assign) BOOL marked;                               //@synthesize marked=_marked - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDeviceID:(NSData *)arg1 ;
-(NSData *)deviceID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)marked;
-(id)description;
-(void)setClientData:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)clientData;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)clientDataVRFOutput;
-(void)setClientDataVRFOutput:(NSData *)arg1 ;
-(BOOL)successfulSync;
-(BOOL)notInSyncedData;
-(id)initWithClientData:(id)arg1 ;
-(void)setSuccessfulSync:(BOOL)arg1 ;
-(void)setMarked:(BOOL)arg1 ;
-(void)setNotInSyncedData:(BOOL)arg1 ;
-(NSData *)deviceVRFOutput;
-(void)setDeviceVRFOutput:(NSData *)arg1 ;
@end

