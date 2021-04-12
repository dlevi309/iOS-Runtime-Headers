/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationURI : IDSDestination {

	IDSURI* _uri;

}

@property (nonatomic,readonly) IDSURI * uri;              //@synthesize uri=_uri - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)groupID;
-(id)initWithURI:(id)arg1 ;
-(id)destinationURIs;
-(id)initWithURIString:(id)arg1 ;
-(IDSURI *)uri;
@end

