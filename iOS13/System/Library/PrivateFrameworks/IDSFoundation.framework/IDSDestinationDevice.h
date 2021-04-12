/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationDevice : IDSDestination {

	IDSURI* _destinationURI;
	BOOL _isGuest;

}

@property (nonatomic,retain) IDSURI * destinationURI;              //@synthesize destinationURI=_destinationURI - In the implementation block
@property (assign,nonatomic) BOOL isGuest;                         //@synthesize isGuest=_isGuest - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isDeviceURI:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)groupID;
-(id)destinationURIs;
-(id)initWithDeviceURI:(id)arg1 ;
-(id)initWithRapportPublicIdentifierURI:(id)arg1 ;
-(id)initWithIDSDeviceURI:(id)arg1 ;
-(BOOL)isGuest;
-(BOOL)isDevice;
-(id)initWithURI:(id)arg1 isGuest:(BOOL)arg2 ;
-(IDSURI *)destinationURI;
-(void)setDestinationURI:(IDSURI *)arg1 ;
-(void)setIsGuest:(BOOL)arg1 ;
@end

