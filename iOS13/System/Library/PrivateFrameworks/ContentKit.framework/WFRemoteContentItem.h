/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFGenericFileContentItem.h>

@class NSDictionary;

@interface WFRemoteContentItem : WFGenericFileContentItem {

	NSDictionary* _serializedItem;

}

@property (nonatomic,copy) NSDictionary * serializedItem;              //@synthesize serializedItem=_serializedItem - In the implementation block
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 contentSource:(id)arg4 ;
-(id)name;
-(id)preferredFileType;
-(id)initWithSerializedItem:(id)arg1 named:(id)arg2 contentSource:(id)arg3 ;
-(id)metadataForSerialization;
-(NSDictionary *)serializedItem;
-(void)setSerializedItem:(NSDictionary *)arg1 ;
@end

