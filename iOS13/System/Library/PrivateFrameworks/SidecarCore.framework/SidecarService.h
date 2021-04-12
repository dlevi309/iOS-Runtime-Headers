/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/


@class SidecarDevice, NSString, NSArray;

@interface SidecarService : NSObject {

	SidecarDevice* _targetDevice;

}

@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) NSString * serviceExtension; 
@property (nonatomic,readonly) NSString * localizedItemName; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) NSArray * returnTypes; 
@property (nonatomic,readonly) NSArray * sendTypes; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * pasteboardTypes; 
@property (nonatomic,readonly) NSString * localizedDescription; 
+(id)name;
+(id)services;
+(id)returnTypes;
+(id)supportedPasteboardTypes;
+(id)allServices;
+(id)serviceWithName:(id)arg1 ;
+(id)extensionForIdentifier:(id)arg1 ;
+(long long)minimumRapportVersion;
+(id)serviceWithIdentifier:(id)arg1 ;
+(id)menuServices;
+(id)servicesForPasteboardSendTypes:(id)arg1 returnTypes:(id)arg2 ;
+(id)allReturnTypes;
+(id)allMenuServices;
+(id)servicesForPasteboardTypes:(id)arg1 ;
+(id)allSendTypes;
-(id)init;
-(NSString *)name;
-(NSString *)localizedDescription;
-(BOOL)isEnabled;
-(id)initWithDevice:(id)arg1 ;
-(NSArray *)devices;
-(NSArray *)pasteboardTypes;
-(NSString *)serviceIdentifier;
-(NSArray *)returnTypes;
-(NSString *)serviceExtension;
-(NSString *)localizedItemName;
-(id)makeRequest;
-(id)mutableRequestMessage;
-(NSArray *)sendTypes;
-(id)makeRequestWithResponder:(id)arg1 sendTypes:(id)arg2 returnTypes:(id)arg3 ;
-(id)makeRequestToDevice:(id)arg1 ;
-(id)copyWithDevice:(id)arg1 ;
@end

