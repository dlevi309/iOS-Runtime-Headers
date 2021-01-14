/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol NSObjectNSCopying;
@interface PXDataSection : NSObject <NSFastEnumeration> {

	id<NSObject><NSCopying> _outlineObject;
	unsigned long long _identifier;
	id _content;

}

@property (nonatomic,readonly) id<NSObject><NSCopying> outlineObject;              //@synthesize outlineObject=_outlineObject - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) BOOL containsAnyObjects; 
@property (nonatomic,readonly) id content;                                         //@synthesize content=_content - In the implementation block
-(id)content;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX44*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectsAtIndexes:(id)arg1 ;
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(id)description;
-(unsigned long long)identifier;
-(id)initWithOutlineObject:(id)arg1 ;
-(BOOL)containsAnyObjects;
-(id<NSObject><NSCopying>)outlineObject;
@end

