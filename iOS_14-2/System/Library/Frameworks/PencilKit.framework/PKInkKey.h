/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKInkKey : NSObject <NSCopying> {

	NSString* _identifier;
	unsigned long long _version;
	NSString* _variant;

}

@property (nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * variant;                 //@synthesize variant=_variant - In the implementation block
-(NSString *)variant;
-(unsigned long long)hash;
-(NSString *)identifier;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3 ;
@end

