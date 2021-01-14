/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NTKComplicationSectionInfo.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTKFaceSlotComplicationDetailListProviderStringSectionInfo : NSObject <NTKComplicationSectionInfo, NSCopying> {

	NSString* _groupName;

}

@property (nonatomic,readonly) NSString * groupName;                                  //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * ntk_identifier; 
@property (nonatomic,copy,readonly) NSString * ntk_localizedSectionName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)groupName;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)ntk_identifier;
-(NSString *)ntk_localizedSectionName;
-(id)initWithGroupName:(id)arg1 ;
@end

