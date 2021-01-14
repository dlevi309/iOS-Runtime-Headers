/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSString;

@interface TPSContextualDuetEventSource : TPSSerializableObject {

	NSString* _sourceID;
	NSString* _bundleID;

}

@property (nonatomic,copy) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sourceID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

