/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(unsigned long long)version;
-(NSString *)variant;
-(id)initWithIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3 ;
@end

