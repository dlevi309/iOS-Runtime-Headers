/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDictionary, NSString;

@interface MPPropertySet : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSSet* _properties;
	NSDictionary* _relationships;

}

@property (nonatomic,readonly) NSSet * properties;                        //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSDictionary * relationships;              //@synthesize relationships=_relationships - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)emptyPropertySet;
+(id)propertySetWithProperties:(id)arg1 ;
-(NSSet *)properties;
-(NSDictionary *)relationships;
-(id)initWithProperties:(id)arg1 relationships:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)propertySetByCombiningWithPropertySet:(id)arg1 ;
-(NSString *)description;
-(id)_stateDumpObject;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)containsPropertySet:(id)arg1 ;
-(BOOL)isEmpty;
-(id)propertySetByIntersectingWithPropertySet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

