/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPropertyDescription, NSEntityDescription;

@interface _NSPropertyDescriptionProxy : NSObject <NSCoding, NSSecureCoding> {

	id _sourceBuffer;
	NSPropertyDescription* _underlyingProperty;
	NSEntityDescription* _entityDescription;
	unsigned _entitysReferenceIDForProperty;

}
+(BOOL)supportsSecureCoding;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
-(Class)class;
-(void)_createCachesAndOptimizeState;
-(id)entity;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)_entitysReferenceID;
-(id)_underlyingProperty;
-(void)_setEntity:(id)arg1 ;
-(void)_setEntityAndMaintainIndices:(id)arg1 ;
-(void)_setEntitysReferenceID:(unsigned)arg1 ;
-(id)initWithPropertyDescription:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

