/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSData;

@interface IMNicknameEncryptionKey : NSObject {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) const void* bytes; 
@property (nonatomic,readonly) unsigned long long length; 
-(const void*)bytes;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)dealloc;
@end

