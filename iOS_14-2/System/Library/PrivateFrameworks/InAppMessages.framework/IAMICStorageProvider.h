/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/


@protocol IAMMessageEntryProvider, IAMMessageMetadataStorage, IAMPropertyStorage;
@interface IAMICStorageProvider : NSObject {

	id<IAMMessageEntryProvider> _messageEntryProvider;
	id<IAMMessageMetadataStorage> _messageMetadataStorage;
	id<IAMPropertyStorage> _propertyStorage;

}

@property (nonatomic,readonly) id<IAMMessageEntryProvider> messageEntryProvider;                  //@synthesize messageEntryProvider=_messageEntryProvider - In the implementation block
@property (nonatomic,readonly) id<IAMMessageMetadataStorage> messageMetadataStorage;              //@synthesize messageMetadataStorage=_messageMetadataStorage - In the implementation block
@property (nonatomic,readonly) id<IAMPropertyStorage> propertyStorage;                            //@synthesize propertyStorage=_propertyStorage - In the implementation block
-(id<IAMMessageEntryProvider>)messageEntryProvider;
-(id<IAMMessageMetadataStorage>)messageMetadataStorage;
-(id<IAMPropertyStorage>)propertyStorage;
@end

