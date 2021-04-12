/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface KTClientDataRecord : NSObject <NSSecureCoding> {

	BOOL _verified;
	NSData* _clientData;
	unsigned long long _applicationVersion;
	NSData* _clientDataVRFOutput;
	NSDate* _markedForDeletion;
	NSDate* _deletionEscrowExpiry;
	NSDate* _addedDate;

}

@property (retain) NSData * clientData;                                //@synthesize clientData=_clientData - In the implementation block
@property (assign) unsigned long long applicationVersion;              //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (retain) NSData * clientDataVRFOutput;                       //@synthesize clientDataVRFOutput=_clientDataVRFOutput - In the implementation block
@property (retain) NSDate * markedForDeletion;                         //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (retain) NSDate * deletionEscrowExpiry;                      //@synthesize deletionEscrowExpiry=_deletionEscrowExpiry - In the implementation block
@property (retain) NSDate * addedDate;                                 //@synthesize addedDate=_addedDate - In the implementation block
@property (assign) BOOL verified;                                      //@synthesize verified=_verified - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setApplicationVersion:(unsigned long long)arg1 ;
-(unsigned long long)applicationVersion;
-(NSDate *)addedDate;
-(void)setAddedDate:(NSDate *)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(BOOL)verified;
-(NSData *)clientData;
-(void)setMarkedForDeletion:(NSDate *)arg1 ;
-(NSDate *)markedForDeletion;
-(void)setClientData:(NSData *)arg1 ;
-(NSData *)clientDataVRFOutput;
-(NSDate *)deletionEscrowExpiry;
-(id)initWithMutation:(id)arg1 ;
-(void)setClientDataVRFOutput:(NSData *)arg1 ;
-(void)setDeletionEscrowExpiry:(NSDate *)arg1 ;
-(id)initWithSingleDataRecord:(id)arg1 ;
@end

