/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IDSURI *)uri;
-(id)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithURIString:(id)arg1 ;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURI:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

