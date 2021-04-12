/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject {

	NSKeyedArchiver* _archiver;

}

@property (nonatomic,readonly) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
-(NSKeyedArchiver *)archiver;
-(void)_configure;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)finishEncoding;
-(id)encodedData;
-(void)dealloc;
-(id)initForWritingWithMessage:(id)arg1 ;
@end

