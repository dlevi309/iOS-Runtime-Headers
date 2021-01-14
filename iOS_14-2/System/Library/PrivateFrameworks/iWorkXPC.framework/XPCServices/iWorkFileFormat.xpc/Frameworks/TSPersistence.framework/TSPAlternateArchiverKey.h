/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPAlternateArchiverKey : NSObject <NSCopying> {

	unsigned long long _version;
	const FieldPath* _fieldPath;

}

@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) const FieldPath* fieldPath;              //@synthesize fieldPath=_fieldPath - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithVersion:(unsigned long long)arg1 fieldPath:(const FieldPath*)arg2 ;
-(const FieldPath*)fieldPath;
@end

