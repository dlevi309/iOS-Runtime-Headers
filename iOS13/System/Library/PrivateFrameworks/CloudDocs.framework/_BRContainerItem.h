/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)itemIdentifier;
-(id)typeIdentifier;
-(id)filename;
-(id)displayName;
-(id)containerDisplayName;
-(id)parentItemIdentifier;
-(id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3 ;
-(unsigned long long)capabilities;
-(BOOL)fp_isContainer;
-(id)fp_cloudContainerIdentifier;
-(id)fp_cloudContainerClientBundleIdentifiers;
@end

