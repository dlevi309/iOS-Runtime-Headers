/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)metadataValueForKey:(id)arg1 ;
-(id)allMetadataValues;
-(id)initWithCoder:(id)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

