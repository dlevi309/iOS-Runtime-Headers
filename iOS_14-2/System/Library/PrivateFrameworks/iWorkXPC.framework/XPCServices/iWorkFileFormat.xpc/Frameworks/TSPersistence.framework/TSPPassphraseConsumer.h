/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

@class NSString, NSData;


@protocol TSPPassphraseConsumer <NSObject>
@property (nonatomic,readonly) NSString * passphraseHint; 
@property (nonatomic,readonly) NSData * keychainGenericItem; 
@property (nonatomic,readonly) NSString * service; 
@optional
-(NSString *)service;
-(NSString *)passphraseHint;
-(NSData *)keychainGenericItem;

@end

