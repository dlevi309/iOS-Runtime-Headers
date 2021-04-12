/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject {

	NSKeyedArchiver* _archiver;

}

@property (nonatomic,readonly) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
-(void)dealloc;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)encodedData;
-(void)finishEncoding;
-(void)_configure;
-(NSKeyedArchiver *)archiver;
-(id)initForWritingWithMessage:(id)arg1 ;
@end

