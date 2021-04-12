/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)groupId;
-(void)setGroupId:(id)arg1 ;
-(id)drawable;
-(void)setDrawable:(id)arg1 ;
-(id)initWithDrawable:(id)arg1 groupId:(id)arg2 ;
@end

