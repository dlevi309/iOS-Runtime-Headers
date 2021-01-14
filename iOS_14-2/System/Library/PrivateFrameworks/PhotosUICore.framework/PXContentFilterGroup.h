/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PXContentFilterGroup : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _filterIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filterIdentifiers;              //@synthesize filterIdentifiers=_filterIdentifiers - In the implementation block
+(id)groupWithName:(id)arg1 filterIdentifiers:(id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg1 filterIdentifiers:(id)arg2 ;
-(NSArray *)filterIdentifiers;
-(NSString *)name;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

