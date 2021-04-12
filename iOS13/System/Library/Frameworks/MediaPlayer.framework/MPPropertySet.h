/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)properties;
-(NSDictionary *)relationships;
-(id)_stateDumpObject;
-(id)initWithProperties:(id)arg1 relationships:(id)arg2 ;
-(BOOL)containsPropertySet:(id)arg1 ;
-(id)propertySetByCombiningWithPropertySet:(id)arg1 ;
-(id)propertySetByIntersectingWithPropertySet:(id)arg1 ;
@end

