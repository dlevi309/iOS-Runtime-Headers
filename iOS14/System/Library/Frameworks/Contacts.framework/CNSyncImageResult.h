/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@class NSData;

@interface CNSyncImageResult : NSObject {

	unsigned long long _type;
	NSData* _imageData;
	NSData* _imageHash;
	CGRect _cropRect;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                   //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                      //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) NSData * imageHash;                   //@synthesize imageHash=_imageHash - In the implementation block
-(CGRect)cropRect;
-(NSData *)imageData;
-(NSData *)imageHash;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 imageData:(id)arg2 cropRect:(CGRect)arg3 imageHash:(id)arg4 ;
@end

