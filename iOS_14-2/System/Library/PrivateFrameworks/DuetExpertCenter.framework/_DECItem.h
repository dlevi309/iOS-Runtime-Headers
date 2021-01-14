/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/_DECItemEquivalency.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSMutableDictionary, NSString;

@interface _DECItem : NSObject <_DECItemEquivalency, NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	NSMutableDictionary* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)category;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToItem:(id)arg1 ;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(NSMutableDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

