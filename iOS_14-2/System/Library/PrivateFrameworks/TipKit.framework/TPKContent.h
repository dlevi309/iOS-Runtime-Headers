/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
*/

#import <TipKit/TipKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface TPKContent : NSObject <NSSecureCoding, NSCopying> {

	long long _customizationID;
	NSArray* _dismissalEvents;
	NSString* _identifier;
	long long _version;

}

@property (nonatomic,readonly) long long customizationID;               //@synthesize customizationID=_customizationID - In the implementation block
@property (nonatomic,readonly) NSArray * dismissalEvents;               //@synthesize dismissalEvents=_dismissalEvents - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long version;                       //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)customizationID;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 dismissalEvents:(id)arg2 customizationID:(long long)arg3 ;
-(NSArray *)dismissalEvents;
@end

