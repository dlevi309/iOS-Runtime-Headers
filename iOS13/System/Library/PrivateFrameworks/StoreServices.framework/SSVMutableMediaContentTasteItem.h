/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVMediaContentTasteItem.h>

@class NSString;

@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem

@property (assign,nonatomic) unsigned long long contentType; 
@property (nonatomic,copy) NSString * playlistGlobalID; 
@property (assign,nonatomic) long long storeAdamID; 
@property (assign,nonatomic) unsigned long long tasteType; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentType:(unsigned long long)arg1 ;
-(void)setStoreAdamID:(long long)arg1 ;
-(void)setPlaylistGlobalID:(NSString *)arg1 ;
-(void)setTasteType:(unsigned long long)arg1 ;
@end

