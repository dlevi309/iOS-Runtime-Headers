/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFGenericFileContentItem.h>

@class NSDictionary;

@interface WFRemoteContentItem : WFGenericFileContentItem {

	NSDictionary* _serializedItem;

}

@property (nonatomic,copy) NSDictionary * serializedItem;              //@synthesize serializedItem=_serializedItem - In the implementation block
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 ;
-(id)name;
-(id)preferredFileType;
-(id)initWithSerializedItem:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 ;
-(id)metadataForSerialization;
-(NSDictionary *)serializedItem;
-(void)setSerializedItem:(NSDictionary *)arg1 ;
@end

