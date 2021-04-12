/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InfoKit.framework/InfoKit
*/

#import <InfoKit/InfoKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface INKContent : NSObject <NSSecureCoding, NSCopying> {

	long long _customizationID;
	NSArray* _dismissalEvents;
	NSString* _identifier;

}

@property (nonatomic,readonly) long long customizationID;               //@synthesize customizationID=_customizationID - In the implementation block
@property (nonatomic,readonly) NSArray * dismissalEvents;               //@synthesize dismissalEvents=_dismissalEvents - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)customizationID;
-(NSArray *)dismissalEvents;
-(id)initWithIdentifier:(id)arg1 dismissalEvents:(id)arg2 customizationID:(long long)arg3 ;
@end

