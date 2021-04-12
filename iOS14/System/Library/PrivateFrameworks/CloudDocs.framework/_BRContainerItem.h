/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <CloudDocs/BRQueryItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying> {

	NSString* _containerID;
	NSSet* _containerClientIDs;
	NSString* _localizedName;

}
+(BOOL)supportsSecureCoding;
-(id)itemIdentifier;
-(unsigned long long)capabilities;
-(id)typeIdentifier;
-(id)filename;
-(void)encodeWithCoder:(id)arg1 ;
-(id)parentItemIdentifier;
-(id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3 ;
-(BOOL)fp_isContainer;
-(id)fp_cloudContainerIdentifier;
-(id)fp_cloudContainerClientBundleIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(id)containerDisplayName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
@end

