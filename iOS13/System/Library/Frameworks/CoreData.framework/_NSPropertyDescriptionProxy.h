/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPropertyDescription, NSEntityDescription;

@interface _NSPropertyDescriptionProxy : NSObject <NSSecureCoding> {

	id _sourceBuffer;
	NSPropertyDescription* _underlyingProperty;
	NSEntityDescription* _entityDescription;
	unsigned _entitysReferenceIDForProperty;

}
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)entity;
-(unsigned)_entitysReferenceID;
-(id)_underlyingProperty;
-(void)_createCachesAndOptimizeState;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_setEntity:(id)arg1 ;
-(void)_setEntityAndMaintainIndices:(id)arg1 ;
-(void)_setEntitysReferenceID:(unsigned)arg1 ;
-(id)initWithPropertyDescription:(id)arg1 ;
@end

