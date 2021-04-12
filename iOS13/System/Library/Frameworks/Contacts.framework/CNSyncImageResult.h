/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(NSData *)imageData;
-(NSData *)imageHash;
-(CGRect)cropRect;
-(id)initWithType:(unsigned long long)arg1 imageData:(id)arg2 cropRect:(CGRect)arg3 imageHash:(id)arg4 ;
@end

