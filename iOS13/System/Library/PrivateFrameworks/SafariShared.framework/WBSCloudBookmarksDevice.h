/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSCloudBookmarksDevice : NSObject {

	NSString* _operatingSystemFamily;
	SCD_Struct_WB5 _operatingSystemVersion;

}

@property (nonatomic,readonly) NSString * operatingSystemFamily;                   //@synthesize operatingSystemFamily=_operatingSystemFamily - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WB5 operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(SCD_Struct_WB5)operatingSystemVersion;
-(id)initWithOperatingSystemVersion:(SCD_Struct_WB5)arg1 family:(id)arg2 ;
-(NSString *)operatingSystemFamily;
@end

