/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class NSData;

@interface PKCloudRecordAssetURL : PKCloudRecordObject {

	int _fd;
	NSData* _data;

}
+(BOOL)supportsSecureCoding;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecords:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)description;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
-(id)assetData;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

