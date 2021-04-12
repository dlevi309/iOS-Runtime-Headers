/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ICInAppMessageMetadataEntry : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _metadataValues;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)metadataValueForKey:(id)arg1 ;
-(id)allMetadataValues;
@end

