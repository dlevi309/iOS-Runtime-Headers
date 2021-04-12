/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@class CNContactStore;

@interface CNSyncImageUtilities : NSObject {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)os_log;
+(id)syncImageResultForImageData:(id)arg1 cropRect:(CGRect)arg2 isPNG:(BOOL)arg3 maxSize:(long long)arg4 ;
+(id)imageDataByRemovingOrientation:(id)arg1 isPNG:(BOOL)arg2 ;
+(id)syncImageResultForJPEGCompressionWithImageData:(id)arg1 cropRect:(CGRect)arg2 maxSize:(long long)arg3 ;
+(id)syncImageResultForScalingDownImageData:(id)arg1 cropRect:(CGRect)arg2 isPNG:(BOOL)arg3 maxSize:(long long)arg4 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)syncImageResultForContact:(id)arg1 maxSize:(long long)arg2 ;
-(void)saveSyncImageResult:(id)arg1 toContact:(id)arg2 ;
-(id)generateSyncImageForImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)generateSyncImageForContact:(id)arg1 ;
@end

