/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, FAFamilyCloudKitProperties, NSDictionary;

@interface FAFamilyCircle : NSObject <NSSecureCoding> {

	NSArray* _members;
	FAFamilyCloudKitProperties* _cloudKitProperties;
	NSDictionary* __serverResponse;

}

@property (readonly) NSDictionary * _serverResponse;                               //@synthesize _serverResponse=__serverResponse - In the implementation block
@property (readonly) NSArray * members;                                            //@synthesize members=_members - In the implementation block
@property (readonly) FAFamilyCloudKitProperties * cloudKitProperties;              //@synthesize cloudKitProperties=_cloudKitProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)members;
-(id)initWithServerResponse:(id)arg1 ;
-(NSDictionary *)_serverResponse;
-(FAFamilyCloudKitProperties *)cloudKitProperties;
@end

