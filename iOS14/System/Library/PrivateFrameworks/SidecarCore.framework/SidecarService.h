/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)services;
+(id)returnTypes;
+(id)name;
+(id)serviceWithName:(id)arg1 ;
+(id)extensionForIdentifier:(id)arg1 ;
+(id)supportedPasteboardTypes;
+(id)allServices;
+(long long)minimumRapportVersion;
+(id)serviceWithIdentifier:(id)arg1 ;
+(id)menuServices;
+(id)servicesForPasteboardSendTypes:(id)arg1 returnTypes:(id)arg2 ;
+(id)allReturnTypes;
+(id)allMenuServices;
+(id)servicesForPasteboardTypes:(id)arg1 ;
+(id)allSendTypes;
-(id)initWithDevice:(id)arg1 ;
-(NSArray *)devices;
-(id)init;
-(NSArray *)returnTypes;
-(NSString *)serviceExtension;
-(NSArray *)pasteboardTypes;
-(NSString *)name;
-(NSString *)serviceIdentifier;
-(NSString *)localizedDescription;
-(BOOL)isEnabled;
-(id)makeRequest;
-(NSString *)localizedItemName;
-(id)mutableRequestMessage;
-(NSArray *)sendTypes;
-(id)makeRequestWithResponder:(id)arg1 sendTypes:(id)arg2 returnTypes:(id)arg3 ;
-(id)makeRequestToDevice:(id)arg1 ;
-(id)copyWithDevice:(id)arg1 ;
@end

