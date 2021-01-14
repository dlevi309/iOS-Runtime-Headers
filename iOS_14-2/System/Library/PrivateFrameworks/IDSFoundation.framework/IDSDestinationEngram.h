/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestination.h>

@class ENGroup;

@interface IDSDestinationEngram : IDSDestination {

	ENGroup* _underlyingGroup;

}

@property (nonatomic,retain,readonly) ENGroup * underlyingGroup;              //@synthesize underlyingGroup=_underlyingGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithENGroup:(id)arg1 ;
-(ENGroup *)underlyingGroup;
-(id)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

