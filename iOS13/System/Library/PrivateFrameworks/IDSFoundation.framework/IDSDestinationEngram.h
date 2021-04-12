/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)groupID;
-(id)destinationURIs;
-(id)initWithENGroup:(id)arg1 ;
-(ENGroup *)underlyingGroup;
@end

