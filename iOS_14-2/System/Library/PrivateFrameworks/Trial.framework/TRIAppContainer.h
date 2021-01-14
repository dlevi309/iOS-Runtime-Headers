/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TRIAppContainer : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	long long _type;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)containerWithIdentifier:(id)arg1 type:(long long)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 ;
-(id)description;
-(long long)fetchStatus;
-(id)containerURL;
-(long long)type;
-(unsigned long long)hash;
-(id)_containerURLWithError:(id*)arg1 ;
-(id)_appBundleContainerDirectoryAsSystemWithError:(id*)arg1 ;
-(id)_groupContainerDirectoryAsOwner;
-(id)initWithCoder:(id)arg1 ;
-(id)_groupContainerDirectoryAsSystemWithError:(id*)arg1 ;
-(id)_appDataContainerDirectoryAsSystemWithError:(id*)arg1 ;
-(id)_appBundleContainerDirectoryAsOwner;
-(id)_appDataContainerDirectoryAsOwner;
-(id)sanitizedIdentifier;
-(id)containerURLAsOwner;
-(id)_containerError:(unsigned long long)arg1 withFormat:(id)arg2 ;
-(id)_appContainerDirectoryAsSystemWithContainerClass:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToContainer:(id)arg1 ;
-(id)copyWithReplacementIdentifier:(id)arg1 ;
-(id)copyWithReplacementType:(long long)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

