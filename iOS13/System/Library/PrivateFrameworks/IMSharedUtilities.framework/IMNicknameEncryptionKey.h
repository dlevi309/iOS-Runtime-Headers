/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSData;

@interface IMNicknameEncryptionKey : NSObject {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) const void* bytes; 
@property (nonatomic,readonly) unsigned long long length; 
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
@end

