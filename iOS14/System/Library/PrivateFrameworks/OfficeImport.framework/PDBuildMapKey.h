/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {

	NSValue* mDrawableValue;
	NSString* mGroupId;

}
-(id)init;
-(id)groupId;
-(id)description;
-(void)setGroupId:(id)arg1 ;
-(unsigned long long)hash;
-(id)drawable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDrawable:(id)arg1 ;
-(id)initWithDrawable:(id)arg1 groupId:(id)arg2 ;
@end

